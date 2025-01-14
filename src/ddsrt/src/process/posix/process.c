/*
 * Copyright(c) 2006 to 2021 ZettaScale Technology and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#include <sys/types.h>
#include <unistd.h>
#include "dds/ddsrt/process.h"

ddsrt_pid_t
ddsrt_getpid(void)
{
  /* Mapped to taskIdSelf() in VxWorks kernel mode. */
  return getpid();
}
