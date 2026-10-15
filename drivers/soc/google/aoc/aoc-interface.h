/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Google Whitechapel AoC Core Driver
 *
 * Copyright (c) 2021 Google LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#if IS_ENABLED(CONFIG_GOOGLE_AOC_GS101)
#include "aoc-interface-gs101.h"
#else
#include "aoc-interface-gs201.h"
#endif

