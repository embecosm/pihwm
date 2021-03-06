/* pwm_demo.c -- Dem oof pulse width modulation

   Copyright (C) 2012 Omer Kilic
   Copyright (C) 2012 Embecosm Limited

   Contributor Omer Kilic <omerkilic@gmail.com>
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

#include <stdio.h>
#include <stdlib.h>

#include "pihwm.h"
#include "pi_pwm.h"


int
main (void)
{
  int i, j;

  // Initialise PWM module
  if ( pwm_init() < 0 ){
    printf("ERROR: Can't initialise PWM module, are you running this as root?\n");
    exit(1);
  }

  for ( i = 0; i < 5; i++ ){
	// Do a little fade in/out
  	printf("Fading in...\n");
	for( j = 0; j < PWM_MAX; j++ ){
   	pwm_value(j);
		delay(2);
	}

	  printf("Fading out...\n");
	  for( j = PWM_MAX; j > 0; j-- ){
	    pwm_value(j);
	    delay(2);
	 }
  }

  // Unmap memory and disable the PWM module
  pwm_release();
  
  return 0;

}

