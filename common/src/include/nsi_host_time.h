/*
 * Copyright (c) 2026 Quercus
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef NSI_COMMON_SRC_INCL_NSI_HOST_TIME_H
#define NSI_COMMON_SRC_INCL_NSI_HOST_TIME_H

#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Host clock and sleep calls used by the runner HW models.
 * Like nsi_host_trampolines.h, these are kept in their own file
 * (nsi_host_time.c) so they can be replaced as a unit.
 * Only for the runner, not for the embedded code.
 */
int nsi_host_clock_gettime(clockid_t clock_id, struct timespec *value);
int nsi_host_nanosleep(const struct timespec *request, struct timespec *remaining);

#ifdef __cplusplus
}
#endif

#endif /* NSI_COMMON_SRC_INCL_NSI_HOST_TIME_H */
