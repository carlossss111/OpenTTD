/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file os2_main.cpp Main entry for OS/2. */

#include "../../stdafx.h"
#include "../../openttd.h"
#include "../../core/random_func.hpp"
#include "../../string_func.h"

#include <stdlib.h>
#include <time.h>

#include "../../safeguards.h"

int CDECL main(int argc, char *argv[])
{
	SetRandomSeed(time(nullptr));

	/* Make sure our arguments contain only valid UTF-8 characters. */
	for (int i = 0; i < argc; i++) StrMakeValidInPlace(argv[i]);

	return openttd_main(argc, argv);
}
