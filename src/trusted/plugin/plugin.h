/*
 * Copyright (c) 2011 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// The portable representation of an instance and root scriptable object.
// The PPAPI version of the plugin instantiates a subclass of this class.

#ifndef NATIVE_CLIENT_SRC_TRUSTED_PLUGIN_PLUGIN_H_
#define NATIVE_CLIENT_SRC_TRUSTED_PLUGIN_PLUGIN_H_

#include <stdio.h>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <vector>

#include "native_client/src/include/nacl_macros.h"
#include "native_client/src/include/nacl_scoped_ptr.h"
#include "native_client/src/include/nacl_string.h"
#include "native_client/src/trusted/plugin/api_defines.h"
#include "native_client/src/trusted/plugin/file_downloader.h"
#include "native_client/src/trusted/plugin/nacl_subprocess.h"
#include "native_client/src/trusted/plugin/pnacl_coordinator.h"
#include "native_client/src/trusted/plugin/service_runtime.h"
#include "native_client/src/trusted/plugin/portable_handle.h"
#include "native_client/src/trusted/plugin/utility.h"

#include "native_client/src/third_party/ppapi/cpp/private/instance_private.h"
#include "native_client/src/third_party/ppapi/cpp/rect.h"
#include "native_client/src/third_party/ppapi/cpp/url_loader.h"
#include "native_client/src/third_party/ppapi/cpp/var.h"

struct NaClSrpcChannel;
struct NaClDesc;

namespace nacl {
class DescWrapper;
class DescWrapperFactory;
}  // namespace nacl

namespace pp {
class Find_Dev;
class Printing_Dev;
class Selection_Dev;
class URLLoader;
class WidgetClient_Dev;
class URLUtil_Dev;
class Zoom_Dev;
}

namespace ppapi_proxy {
class BrowserPpp;
}

namespace plugin {

class ErrorInfo;
class Manifest;
class PnaclCoordinator;
class ProgressEvent;
class ScriptableHandle;

class Plugin : public PortableHandle {
 public:
  // Load support.
  // NaCl module can be loaded given a DescWrapper.
  // Updates nacl_module_origin() and nacl_module_url().
  bool LoadNaClModule(nacl::DescWrapper* wrapper, ErrorInfo* error_info);

  // Load support.
  // A helper SRPC NaCl module can be loaded given a DescWrapper.
  // Does not update nacl_module_origin().
  // Returns kInvalidNaClSubprocessId or the ID of the new helper NaCl module.
  NaClSubprocessId LoadHelperNaClModule(nacl::DescWrapper* wrapper,
                                        ErrorInfo* error_info);

  // Returns the argument value for the specified key, or NULL if not found.
  // The callee retains ownership of the result.
  char* LookupArgument(const char* key);

  enum LengthComputable {
    LENGTH_IS_NOT_COMPUTABLE = 0,
    LENGTH_IS_COMPUTABLE = 1
  };
  // Report successful loading of a module.
  virtual void ReportLoadSuccess(LengthComputable length_computable,
                                 uint64_t loaded_bytes,
                                 uint64_t total_bytes) = 0;
  // Report an error that was encountered while loading a module.
  virtual void ReportLoadError(const ErrorInfo& error_info) = 0;
  // Report loading a module was aborted, typically due to user action.
  virtual void ReportLoadAbort() = 0;
  // Dispatch a JavaScript event to indicate a key step in loading.
  // |event_type| is a character string indicating which type of progress
  // event (loadstart, progress, error, abort, load, loadend).
  virtual void EnqueueProgressEvent(const char* event_type,
                                    LengthComputable length_computable,
                                    uint64_t loaded_bytes,
                                    uint64_t total_bytes) = 0;

  // Report the error code that sel_ldr produces when starting a nexe.
  virtual void ReportSelLdrLoadStatus(int status) = 0;

  // Report the error when nexe dies after loading.
  virtual void ReportDeadNexe() = 0;

  // Get the method signature so ScriptableHandle can marshal the inputs
  virtual bool InitParams(uintptr_t method_id,
                          CallType call_type,
                          SrpcParams* params);

  // The unique identifier for this plugin instance.
  InstanceIdentifier instance_id() const { return instance_id_; }

  // The embed/object tag argument list.
  int argc() const { return argc_; }
  char** argn() const { return argn_; }
  char** argv() const { return argv_; }

  virtual BrowserInterface* browser_interface() const {
    return browser_interface_;
  }
  virtual Plugin* plugin() const { return const_cast<Plugin*>(this); }

  // URL resolution support.
  // plugin_base_url is the URL used for resolving relative URLs used in
  // src="...".
  nacl::string plugin_base_url() const { return plugin_base_url_; }
  void set_plugin_base_url(nacl::string url) { plugin_base_url_ = url; }
  // manifest_base_url is the URL used for resolving relative URLs mentioned
  // in manifest files.  If the manifest is a data URI, this is an empty string.
  nacl::string manifest_base_url() const { return manifest_base_url_; }
  void set_manifest_base_url(nacl::string url) { manifest_base_url_ = url; }

  // The URL of the manifest file as set by the "src" attribute.
  // It is not the fully resolved URL if it was set as relative.
  const nacl::string& manifest_url() const { return manifest_url_; }
  void set_manifest_url(const nacl::string& manifest_url) {
    manifest_url_ = manifest_url;
  }

  // The state of readiness of the plugin.
  enum ReadyState {
    // The trusted plugin begins in this ready state.
    UNSENT = 0,
    // The manifest file has been requested, but not yet received.
    OPENED = 1,
    // This state is unused.
    HEADERS_RECEIVED = 2,
    // The manifest file has been received and the nexe successfully requested.
    LOADING = 3,
    // The nexe has been loaded and the proxy started, so it is ready for
    // interaction with the page.
    DONE = 4
  };
  ReadyState nacl_ready_state() const { return nacl_ready_state_; }
  void set_nacl_ready_state(ReadyState nacl_ready_state) {
    nacl_ready_state_ = nacl_ready_state;
  }

  // Get the NaCl module subprocess that was assigned the ID |id|.
  NaClSubprocess* nacl_subprocess(NaClSubprocessId id) const {
    if (kInvalidNaClSubprocessId == id) {
      return NULL;
    }
    return nacl_subprocesses_[id];
  }
  NaClSubprocessId next_nacl_subprocess_id() const {
    return static_cast<NaClSubprocessId>(nacl_subprocesses_.size());
  }

  nacl::DescWrapperFactory* wrapper_factory() const { return wrapper_factory_; }

  // Requesting a nacl manifest from a specified url.
  virtual void RequestNaClManifest(const nacl::string& url) = 0;

  // Start up proxied execution of the browser API.
  virtual bool StartProxiedExecution(NaClSrpcChannel* srpc_channel,
                                     ErrorInfo* error_info) = 0;

  // Determines whether experimental APIs are usable.
  static bool ExperimentalJavaScriptApisAreEnabled();

  // Override virtual methods for method and property dispatch.
  virtual bool HasMethod(uintptr_t method_id, CallType call_type);
  virtual bool Invoke(uintptr_t method_id,
                      CallType call_type,
                      SrpcParams* params);
  virtual std::vector<uintptr_t>* GetPropertyIdentifiers() {
    return property_get_methods_.Keys();
  }

  // The size returned when a file download operation is unable to determine
  // the size of the file to load.  W3C ProgressEvents specify that unknown
  // sizes return 0.
  static const uint64_t kUnknownBytes = 0;

 protected:
  Plugin();
  virtual ~Plugin();
  bool Init(BrowserInterface* browser_interface,
            InstanceIdentifier instance_id,
            int argc,
            char* argn[],
            char* argv[]);
  void LoadMethods();
  // Shuts down socket connection, service runtime, and receive thread,
  // in this order, for all spun up NaCl module subprocesses.
  void ShutDownSubprocesses();

  ScriptableHandle* scriptable_handle() const { return scriptable_handle_; }
  void set_scriptable_handle(ScriptableHandle* scriptable_handle) {
    scriptable_handle_ = scriptable_handle;
  }

  // Access the service runtime for the main NaCl subprocess.
  ServiceRuntime* main_service_runtime() const {
    return main_subprocess_.service_runtime();
  }

  // Setting the properties and methods exported.
  void AddPropertyGet(RpcFunction function_ptr,
                      const char* name,
                      const char* outs);
  void AddPropertySet(RpcFunction function_ptr,
                      const char* name,
                      const char* ins);
  void AddMethodCall(RpcFunction function_ptr,
                     const char* name,
                     const char* ins,
                     const char* outs);

  bool receive_thread_running_;
  struct NaClThread receive_thread_;

 private:
  NACL_DISALLOW_COPY_AND_ASSIGN(Plugin);

  InstanceIdentifier instance_id_;
  BrowserInterface* browser_interface_;
  ScriptableHandle* scriptable_handle_;

  int argc_;
  char** argn_;
  char** argv_;

  // Keep track of the NaCl module subprocesses that were spun up in the plugin.
  NaClSubprocess main_subprocess_;
  std::vector<NaClSubprocess*> nacl_subprocesses_;

  nacl::string plugin_base_url_;
  nacl::string manifest_base_url_;
  nacl::string manifest_url_;
  ReadyState nacl_ready_state_;

  nacl::DescWrapperFactory* wrapper_factory_;

  MethodMap methods_;
  MethodMap property_get_methods_;
  MethodMap property_set_methods_;

  static bool SendAsyncMessage(void* obj, SrpcParams* params,
                               nacl::DescWrapper** fds, int fds_count);
  static bool SendAsyncMessage0(void* obj, SrpcParams* params);
  static bool SendAsyncMessage1(void* obj, SrpcParams* params);
  // Help load a nacl module, from the file specified in wrapper.
  // This will fully initialize the |subprocess| if the load was successful.
  bool LoadNaClModuleCommon(nacl::DescWrapper* wrapper,
                            NaClSubprocess* subprocess,
                            ErrorInfo* error_info);
  bool StartSrpcServices(NaClSubprocess* subprocess, ErrorInfo* error_info);
  bool StartSrpcServicesCommon(NaClSubprocess* subprocess,
                               ErrorInfo* error_info);
  bool StartJSObjectProxy(NaClSubprocess* subprocess, ErrorInfo* error_info);
  static bool StartSrpcServicesWrapper(void* obj, SrpcParams* params);

  MethodInfo* GetMethodInfo(uintptr_t method_id, CallType call_type);
};

// Encapsulates a PPAPI NaCl plugin.
class PluginPpapi : public pp::InstancePrivate, public Plugin {
 public:
  // Factory method for creation.
  static PluginPpapi* New(PP_Instance instance);

  // ----- Methods inherited from pp::Instance:

  // Initializes this plugin with <embed/object ...> tag attribute count |argc|,
  // names |argn| and values |argn|. Returns false on failure.
  // Gets called by the browser right after New().
  virtual bool Init(uint32_t argc, const char* argn[], const char* argv[]);

  // Handles view changes from the browser.
  virtual void DidChangeView(const pp::Rect& position, const pp::Rect& clip);

  // Handles gaining or losing focus.
  virtual void DidChangeFocus(bool has_focus);

  // Handles input events delivered from the browser to this plugin element.
  virtual bool HandleInputEvent(const pp::InputEvent& event);

  // Handles gaining or losing focus.
  virtual bool HandleDocumentLoad(const pp::URLLoader& url_loader);

  // Returns a scriptable reference to this plugin element.
  // Called by JavaScript document.getElementById(plugin_id).
  virtual pp::Var GetInstanceObject();

  // Handles postMessage from browser
  virtual void HandleMessage(const pp::Var& message);

  // ----- Methods inherited from Plugin:

  // Requests a NaCl manifest download from a |url| relative to the page origin.
  virtual void RequestNaClManifest(const nacl::string& url);

  // Support for proxied execution.
  virtual bool StartProxiedExecution(NaClSrpcChannel* srpc_channel,
                                     ErrorInfo* error_info);

  // Getter for PPAPI proxy interface.
  ppapi_proxy::BrowserPpp* ppapi_proxy() const { return ppapi_proxy_; }

  // Report successful loading of a module.
  virtual void ReportLoadSuccess(LengthComputable length_computable,
                                 uint64_t loaded_bytes,
                                 uint64_t total_bytes);
  // Report an error encountered while loading a module.
  virtual void ReportLoadError(const ErrorInfo& error_info);

  // Report loading a module was aborted, typically due to user action.
  virtual void ReportLoadAbort();
  // Dispatch a JavaScript event to indicate a key step in loading.
  // |event_type| is a character string indicating which type of progress
  // event (loadstart, progress, error, abort, load, loadend).  Events are
  // enqueued on the JavaScript event loop, which then calls back through
  // DispatchProgressEvent.
  virtual void EnqueueProgressEvent(const char* event_type,
                                    LengthComputable length_computable,
                                    uint64_t loaded_bytes,
                                    uint64_t total_bytes);

  // Report the error code that sel_ldr produces when starting a nexe.
  virtual void ReportSelLdrLoadStatus(int status);

  // Report nexe death after load to JS and shut down the proxy.
  void ReportDeadNexe();

  // Called back by CallOnMainThread.  Dispatches the first enqueued progress
  // event.
  void DispatchProgressEvent(int32_t result);

  // ----- Methods unique to PluginPpapi:

  // Requests a URL asynchronously resulting in a call to js_callback.onload
  // with NaClDesc-wrapped file descriptor on success and js_callback.onfail
  // with an error string on failure.
  // This is used by JS-based __urlAsNaClDesc().
  void UrlAsNaClDesc(const nacl::string& url, pp::VarPrivate js_callback);
  // Requests a URL asynchronously resulting in a call to pp_callback with
  // a PP_Error indicating status. On success an open file descriptor
  // corresponding to the url body is recorded for further lookup.
  // This is used by SRPC-based StreamAsFile().
  bool StreamAsFile(const nacl::string& url, PP_CompletionCallback pp_callback);
  // Returns an open POSIX file descriptor retrieved by StreamAsFile()
  // or NACL_NO_FILE_DESC. The caller must take ownership of the descriptor.
  int32_t GetPOSIXFileDesc(const nacl::string& url);

  // A helper function that gets the scheme type for |url|. Uses URLUtil_Dev
  // interface which this class has as a member.
  UrlSchemeType GetUrlScheme(const std::string& url);

  // Get the text description of the last error reported by the plugin.
  const nacl::string& last_error_string() const { return last_error_string_; }
  void set_last_error_string(const nacl::string& error) {
    last_error_string_ = error;
  }

  // The MIME type used to instantiate this instance of the NaCl plugin.
  // Typically, the MIME type will be application/x-nacl.  However, if the NEXE
  // is being used as a content type handler for another content type (such as
  // PDF), then this function will return that type.
  const nacl::string& mime_type() const { return mime_type_; }
  // The default MIME type for the NaCl plugin.
  static const char* const kNaClMIMEType;
  // Tests if the MIME type is not a NaCl MIME type.
  bool IsForeignMIMEType() const;
  // Returns true if PPAPI Dev interfaces should be allowed.
  bool enable_dev_interface() { return enable_dev_interface_; }

  Manifest const* manifest() const { return manifest_.get(); }

 private:
  NACL_DISALLOW_COPY_AND_ASSIGN(PluginPpapi);
  // Prevent construction and destruction from outside the class:
  // must use factory New() method instead.
  explicit PluginPpapi(PP_Instance instance);
  // The browser will invoke the destructor via the pp::Instance
  // pointer to this object, not from base's Delete().
  virtual ~PluginPpapi();

  // File download support.  |nexe_downloader_| can be opened with a specific
  // callback to run when the file has been downloaded and is opened for
  // reading.  We use one downloader for all URL downloads to prevent issuing
  // multiple GETs that might arrive out of order.  For example, this will
  // prevent a GET of a NaCl manifest while a .nexe GET is pending.  Note that
  // this will also prevent simultaneous handling of multiple .nexes on a page.
  FileDownloader nexe_downloader_;
  pp::CompletionCallbackFactory<PluginPpapi> callback_factory_;

  PnaclCoordinator pnacl_;

  // Check url and decide if PPAPI Dev interfaces are required.
  bool RequiresDevInterface(const nacl::string& manifest_url);

  // Callback used when getting the URL for the .nexe file.  If the URL loading
  // is successful, the file descriptor is opened and can be passed to sel_ldr
  // with the sandbox on.
  void NexeFileDidOpen(int32_t pp_error);

  // Callback used when a .nexe is translated from bitcode.  If the translation
  // is successful, the file descriptor is opened and can be passed to sel_ldr
  // with the sandbox on.
  void BitcodeDidTranslate(int32_t pp_error);

  // NaCl ISA selection manifest file support.  The manifest file is specified
  // using the "nacl" attribute in the <embed> tag.  First, the manifest URL (or
  // data: URI) is fetched, then the JSON is parsed.  Once a valid .nexe is
  // chosen for the sandbox ISA, any current service runtime is shut down, the
  // .nexe is loaded and run.

  // Callback used when getting the manifest file as a buffer (e.g., data URIs)
  void NaClManifestBufferReady(int32_t pp_error);

  // Callback used when getting the manifest file as a local file descriptor.
  void NaClManifestFileDidOpen(int32_t pp_error);

  // Processes the JSON manifest string and starts loading the nexe.
  void ProcessNaClManifest(const nacl::string& manifest_json);

  // Parses the JSON in |manifest_json| and retains a Manifest in
  // |manifest_| for use by subsequent resource lookups.
  // On success, |true| is returned and |manifest_| is updated to
  // contain a Manifest that is used by SelectNexeURLFromManifest.
  // On failure, |false| is returned, and |manifest_| is unchanged.
  bool SetManifestObject(const nacl::string& manifest_json,
                         ErrorInfo* error_info);

  // Determines the URL of the program module appropriate for the NaCl sandbox
  // implemented by the installed sel_ldr.  The URL is determined from the
  // Manifest in |manifest_|.  On success, |true| is returned and |result| is
  // set to the URL to use for the program, and |is_portable| is set to
  // |true| if the program is portable bitcode.
  // On failure, |false| is returned.
  bool SelectProgramURLFromManifest(nacl::string* result,
                                    ErrorInfo* error_info,
                                    bool* is_portable);

  // TODO(jvoung): get rid of these once we find a better way to store / install
  // the pnacl translator nexes.
  bool SelectLLCURLFromManifest(nacl::string* result,
                                ErrorInfo* error_info);
  bool SelectLDURLFromManifest(nacl::string* result,
                               ErrorInfo* error_info);

  // Logs timing information to a UMA histogram, and also logs the same timing
  // information divided by the size of the nexe to another histogram.
  void HistogramStartupTimeSmall(const std::string& name, float dt);
  void HistogramStartupTimeMedium(const std::string& name, float dt);

  // Determines the appropriate nexe for the sandbox and requests a load.
  void RequestNexeLoad();

  // Callback used when loading a URL for JS-based __urlAsNaClDesc().
  void UrlDidOpenForUrlAsNaClDesc(int32_t pp_error,
                                  FileDownloader*& url_downloader,
                                  pp::VarPrivate& js_callback);
  // Callback used when loading a URL for SRPC-based StreamAsFile().
  void UrlDidOpenForStreamAsFile(int32_t pp_error,
                                 FileDownloader*& url_downloader,
                                 PP_CompletionCallback pp_callback);

  // Shuts down the proxy for PPAPI nexes.
  void ShutdownProxy();  // Nexe shutdown + proxy deletion.

  // Handles the __setAsyncCallback() method.  Spawns a thread to receive
  // IMC messages from the NaCl process and pass them on to Javascript.
  static bool SetAsyncCallback(void* obj, SrpcParams* params);

  // The manifest dictionary.  Used for looking up resources to be loaded.
  nacl::scoped_ptr<Manifest> manifest_;
  // URL processing interface for use in looking up resources in manifests.
  const pp::URLUtil_Dev* url_util_;

  // A string containing the text description of the last error produced by
  // this plugin.
  nacl::string last_error_string_;

  // A pointer to the browser end of a proxy pattern connecting the
  // NaCl plugin to the PPAPI .nexe's PPP interface
  // (InitializeModule, Shutdown, and GetInterface).
  // TODO(sehr): this should be a scoped_ptr for shutdown.
  ppapi_proxy::BrowserPpp* ppapi_proxy_;

  // PPAPI Dev interfaces are disabled by default.
  bool enable_dev_interface_;

  // If we get a DidChangeView event before the nexe is loaded, we store it and
  // replay it to nexe after it's loaded.
  bool replayDidChangeView;
  pp::Rect replayDidChangeViewPosition;
  pp::Rect replayDidChangeViewClip;

  // If we get a HandleDocumentLoad event before the nexe is loaded, we store
  // it and replay it to nexe after it's loaded.
  bool replayHandleDocumentLoad;
  pp::URLLoader replayHandleDocumentLoadURLLoader;

  nacl::string mime_type_;

  // Keep track of the FileDownloaders created to fetch urls.
  std::set<FileDownloader*> url_downloaders_;
  // Keep track of file descriptors opened by StreamAsFile().
  // These are owned by the browser.
  std::map<nacl::string, int32_t> url_fd_map_;

  // Pending progress events.
  std::queue<ProgressEvent*> progress_events_;

  // Adapter class constructors require a reference to 'this', so we can't
  // contain them directly.
  nacl::scoped_ptr<pp::Find_Dev> find_adapter_;
  nacl::scoped_ptr<pp::Printing_Dev> printing_adapter_;
  nacl::scoped_ptr<pp::Selection_Dev> selection_adapter_;
  nacl::scoped_ptr<pp::WidgetClient_Dev> widget_client_adapter_;
  nacl::scoped_ptr<pp::Zoom_Dev> zoom_adapter_;

  int64_t init_time_;
  int64_t ready_time_;
  size_t nexe_size_;
};

}  // namespace plugin

#endif  // NATIVE_CLIENT_SRC_TRUSTED_PLUGIN_PLUGIN_H_
