/*
 * Copyright (c) 2011 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/*
 * SRPC utility functions.
 */

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

#ifdef __native_client__
#include <inttypes.h>
#include <nacl/nacl_inttypes.h>
#else
#include "native_client/src/include/portability.h"
#include "native_client/src/trusted/desc/nacl_desc_imc.h"
#endif  /* __native_client__ */

#include "native_client/src/include/portability_io.h"
#include "native_client/src/include/portability_process.h"

#include "native_client/src/shared/srpc/nacl_srpc.h"
#include "native_client/src/shared/srpc/nacl_srpc_internal.h"

#define VERBOSITY_NOT_SET ((int) (((unsigned) -1) >> 1))

static int verbosity = VERBOSITY_NOT_SET;

static int getVerbosity() {
  if (VERBOSITY_NOT_SET == verbosity) {
    const char* env_verbosity = getenv("NACL_SRPC_DEBUG");
    verbosity = 0;
    if (NULL != env_verbosity) {
      int v = strtol(env_verbosity, (char**) 0, 0);
      if (v >= 0) {
        verbosity = v;
      }
    }
  }
  return verbosity;
}

void NaClSrpcLog(int detail_level, const char* fmt, ...) {
  if (detail_level <= getVerbosity()) {
    int pid = GETPID();
    va_list ap;
#ifdef __native_client__
    const char* host_or_nacl = "NACL";
#else
    const char* host_or_nacl = "HOST";
#endif
    va_start(ap, fmt);
    fprintf(stderr, "[SRPC: %08x: %s] ", pid, host_or_nacl);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
  }
}

static void formatChar(char cval, char** buf, size_t* bytes_remaining) {
  if (cval < ' ' || cval >= 0x7f) {
    static const size_t kBytesRequiredForHex = 4;
    if (*bytes_remaining >= kBytesRequiredForHex) {
      SNPRINTF(*buf, kBytesRequiredForHex, "\\x%02x", cval);
    }
    *buf += kBytesRequiredForHex;
    *bytes_remaining -= kBytesRequiredForHex;
  } else {
    static const size_t kBytesRequiredForChar = 1;
    if (*bytes_remaining >= kBytesRequiredForChar) {
      **buf = cval;
      *buf += kBytesRequiredForChar;
      *bytes_remaining -= kBytesRequiredForChar;
    }
  }
}

static void formatString(const char* str,
                         char** buf,
                         size_t* bytes_remaining) {
  while (*str != 0) {
    formatChar(*str, buf, bytes_remaining);
    ++str;
  }
}

static void formatDouble(double dval, char** buf, size_t* bytes_remaining) {
  char tmp[32];
  SNPRINTF(tmp, sizeof(tmp), "%f", dval);
  formatString(tmp, buf, bytes_remaining);
}

static void formatCount(uint32_t count, char** buf, size_t* bytes_remaining) {
  char tmp[32];
  SNPRINTF(tmp, sizeof(tmp), "%"NACL_PRIu32, count);
  formatString(tmp, buf, bytes_remaining);
}

static void formatInt(int32_t ival, char** buf, size_t* bytes_remaining) {
  char tmp[32];
  SNPRINTF(tmp, sizeof(tmp), "%"NACL_PRId32, ival);
  formatString(tmp, buf, bytes_remaining);
}

static void formatLong(int64_t lval, char** buf, size_t* bytes_remaining) {
  char tmp[32];
  SNPRINTF(tmp, sizeof(tmp), "%"NACL_PRId64, lval);
  formatString(tmp, buf, bytes_remaining);
}

static void formatPointer(void* pval, char** buf, size_t* bytes_remaining) {
  char tmp[32];
  SNPRINTF(tmp, sizeof(tmp), "%p", pval);
  formatString(tmp, buf, bytes_remaining);
}

void NaClSrpcFormatArg(int detail_level,
                       const NaClSrpcArg* arg,
                       char* buffer,
                       size_t buffer_size) {
  uint32_t i;

  if (detail_level > getVerbosity()) {
    return;
  }
  formatChar(arg->tag, &buffer, &buffer_size);
  formatString("(", &buffer, &buffer_size);
  switch (arg->tag) {
    case NACL_SRPC_ARG_TYPE_INVALID:
      break;
    case NACL_SRPC_ARG_TYPE_BOOL:
      formatInt(arg->u.bval, &buffer, &buffer_size);
      break;
    case NACL_SRPC_ARG_TYPE_CHAR_ARRAY:
      formatCount(arg->u.count, &buffer, &buffer_size);
      /*  this should really perform some escaping. */
      for (i = 0; i < arg->u.count; ++i)
        formatChar(arg->arrays.carr[i], &buffer, &buffer_size);
      break;
    case NACL_SRPC_ARG_TYPE_DOUBLE:
      formatDouble(arg->u.dval, &buffer, &buffer_size);
      break;
    case NACL_SRPC_ARG_TYPE_DOUBLE_ARRAY:
      formatCount(arg->u.count, &buffer, &buffer_size);
      for (i = 0; i < arg->u.count; ++i) {
        formatString(",", &buffer, &buffer_size);
        formatDouble(arg->arrays.darr[i], &buffer, &buffer_size);
      }
      break;
    case NACL_SRPC_ARG_TYPE_HANDLE:
      formatPointer((void*) arg->u.hval, &buffer, &buffer_size);
      break;
    case NACL_SRPC_ARG_TYPE_INT:
      formatInt(arg->u.ival, &buffer, &buffer_size);
      break;
    case NACL_SRPC_ARG_TYPE_INT_ARRAY:
      formatCount(arg->u.count, &buffer, &buffer_size);
      for (i = 0; i < arg->u.count; ++i) {
        formatString(",", &buffer, &buffer_size);
        formatInt(arg->arrays.iarr[i], &buffer, &buffer_size);
      }
      break;
    case NACL_SRPC_ARG_TYPE_LONG:
      formatString("l(", &buffer, &buffer_size);
      formatLong(arg->u.lval, &buffer, &buffer_size);
      break;
    case NACL_SRPC_ARG_TYPE_LONG_ARRAY:
      formatCount(arg->u.count, &buffer, &buffer_size);
      for (i = 0; i < arg->u.count; ++i) {
        formatString(",", &buffer, &buffer_size);
        formatLong(arg->arrays.larr[i], &buffer, &buffer_size);
      }
      break;
    case NACL_SRPC_ARG_TYPE_STRING:
      /* this should really perform some escaping. */
      formatString("\"", &buffer, &buffer_size);
      formatString(arg->arrays.str, &buffer, &buffer_size);
      formatString("\"", &buffer, &buffer_size);
      break;
      /*
       * The cases below are added to avoid warnings, they are only used
       * in the plugin code
       */
    case NACL_SRPC_ARG_TYPE_OBJECT:
      /* this is a pointer that NaCl module can do nothing with */
      formatPointer(arg->arrays.oval, &buffer, &buffer_size);
      break;
    case NACL_SRPC_ARG_TYPE_VARIANT_ARRAY:
      break;
    default:
      break;
  }
  formatString(")", &buffer, &buffer_size);
  *buffer = '\0';
}

/*
 * Get the printable form of an error code.
 */
const char* NaClSrpcErrorString(NaClSrpcError error_code) {
  switch (error_code) {
   case NACL_SRPC_RESULT_OK:
     return "No error";
   case NACL_SRPC_RESULT_BREAK:
     return "Break out of server RPC loop";
   case NACL_SRPC_RESULT_MESSAGE_TRUNCATED:
     return "Received message was shorter than expected";
   case NACL_SRPC_RESULT_NO_MEMORY:
     return "Out of memory";
   case NACL_SRPC_RESULT_PROTOCOL_MISMATCH:
     return "Client and server have different protocol versions";
   case NACL_SRPC_RESULT_BAD_RPC_NUMBER:
     return "No method for the given rpc number";
   case NACL_SRPC_RESULT_BAD_ARG_TYPE:
     return "Bad argument type received";
   case NACL_SRPC_RESULT_TOO_MANY_ARGS:
     return "Too many arguments (more than NACL_SRPC_MAX_ARGS or declared)";
   case NACL_SRPC_RESULT_TOO_FEW_ARGS:
     return "Too few arguments (fewer than declared)";
   case NACL_SRPC_RESULT_IN_ARG_TYPE_MISMATCH:
     return "Input argument type mismatch";
   case NACL_SRPC_RESULT_OUT_ARG_TYPE_MISMATCH:
     return "Output argument type mismatch";
   case NACL_SRPC_RESULT_INTERNAL:
     return "Internal error in rpc method";
   case NACL_SRPC_RESULT_APP_ERROR:
     return "Rpc application returned an error";
   default:
     break;
  }
  return "Unrecognized NaClSrpcError value";
}
