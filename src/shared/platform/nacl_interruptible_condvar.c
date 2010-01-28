/*
 * Copyright 2008 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can
 * be found in the LICENSE file.
 */

/*
 * NaCl Server Runtime interruptible condvar, based on nacl_sync
 * interface.
 */

#include "native_client/src/include/portability.h"
#include "native_client/src/shared/platform/nacl_interruptible_condvar.h"
#include "native_client/src/shared/platform/nacl_log.h"
#include "native_client/src/shared/platform/nacl_sync_checked.h"


int NaClIntrCondVarCtor(struct NaClIntrCondVar  *cp) {
  return NaClCondVarCtor(&cp->cv);
}


void NaClIntrCondVarDtor(struct NaClIntrCondVar *cp) {
  NaClCondVarDtor(&cp->cv);
}

NaClSyncStatus NaClIntrCondVarWait(struct NaClIntrCondVar         *cp,
                                   struct NaClIntrMutex           *mp,
                                   struct nacl_abi_timespec const *ts) {
  NaClSyncStatus rv = NACL_SYNC_INTERNAL_ERROR;
  NaClXMutexLock(&mp->mu);

  if (NACL_INTR_LOCK_HELD != mp->lock_state) {
    if (NACL_INTR_LOCK_FREE == mp->lock_state) {
      /* NACL_INTR_LOCK_FREE - error - you must hold the lock */
      rv = NACL_SYNC_MUTEX_PERMISSION;

    } else {
      /* NACL_INTR_LOCK_INTERRUPTED - just fail the request, we assume
       * that all objects are interrupted for the same reason
       */
      rv = NACL_SYNC_INTERNAL_ERROR;
    }

    NaClXMutexUnlock(&mp->mu);
    return rv;
  }

  mp->lock_state = NACL_INTR_LOCK_FREE;
  NaClXCondVarSignal(&mp->cv);
  /* wait on the internal condvar according to the call type */
  if (NULL == ts) {
    rv = NaClCondVarWait(&cp->cv, &mp->mu);
  } else {
    rv = NaClCondVarTimedWaitAbsolute(&cp->cv, &mp->mu, ts);
  }

  /*
   * When we get here we own mp->mu again so we need to take mp as in
   * its implementation
   */
  while ((NACL_SYNC_CONDVAR_TIMEDOUT != rv) &&
      (NACL_INTR_LOCK_HELD == mp->lock_state)) {
    if (NULL == ts) {
       rv = NaClCondVarWait(&mp->cv, &mp->mu);
    } else {
      rv = NaClCondVarTimedWaitAbsolute(&mp->cv, &mp->mu, ts);
    }
  }
  if (NACL_INTR_LOCK_FREE == mp->lock_state) {
    mp->lock_state = NACL_INTR_LOCK_HELD;
    rv = NACL_SYNC_OK;
  }
  NaClXMutexUnlock(&mp->mu);
  return rv;
}

NaClSyncStatus NaClIntrCondVarSignal(struct NaClIntrCondVar *cp) {
  return NaClCondVarSignal(&cp->cv);
}

NaClSyncStatus NaClIntrCondVarBroadcast(struct NaClIntrCondVar *cp) {
  return NaClCondVarBroadcast(&cp->cv);
}

void NaClIntrCondVarIntr(struct NaClIntrCondVar *cp) {
  /*
   * NOTE: we assume that mutexes are interrupted first, so we will
   * fail to regain ownership of the mutex once the wait for cp->cv is
   * completed (see NaClIntrCondVarWait above)
   */
  NaClCondVarBroadcast(&cp->cv);
}

void NaClIntrCondVarReset(struct NaClIntrCondVar *cp) {
  UNREFERENCED_PARAMETER(cp);
  /* nothing to do here - we don't keep status */
  return;
}
