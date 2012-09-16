/* pihwm.h -- general library header

   Copyright (C) 2012 Omer Kilic
   Copyright (C) 2012 Embecosm Limited

   Contributor Omer Kilic <omer@kilic.name>
   Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>

   This file is part of pihwm.

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 3 of the License, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   You should have received a copy of the GNU General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef PIHWM_H
#define PIHWM_H

/* Headers needed here */
#include <unistd.h>

/* Useful constants */
#define INPUT	"in"
#define OUTPUT	"out"
#define IN	INPUT
#define OUT	OUTPUT

#define HIGH	"1"
#define LOW	"0"
#define ON	HIGH
#define OFF	LOW


/* Useful macros */
#define a(...) (unsigned char[])__VA_ARGS__

#ifdef DEBUG
#define debug(...) printf(__VA_ARGS__)
#else
#define debug(...) ;
#endif

#define delay(d) sleep(d);

#endif
