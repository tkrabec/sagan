/*
** Copyright (C) 2009-2014 Quadrant Information Security <quadrantsec.com>
** Copyright (C) 2009-2014 Champ Clark III <cclark@quadrantsec.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

/* sagan-credit.c 
 *
 * Give credit where credit is due 
 *
 */

#ifdef HAVE_CONFIG_H
#include "config.h"             /* From autoconf */
#endif

#include "sagan.h"

void Sagan_Credits(void)
{

fprintf(stderr, "\n--[Sagan version %s | Credits]--------------------------------\n\n", VERSION);
fprintf(stderr, "Champ Clark III (cclark@quadrantsec.com)\tLead developer\n");
fprintf(stderr, "Robert Nunley (rnunley@quadrantsec.com)\t\tRules/Ideas\n");
fprintf(stderr, "\"DrForbin\"\t\t\t\t\tPatches/testing/bugfixes\n");
fprintf(stderr, "Rainer Gerhards\t\t\t\t\tRsyslog/Liblognorm author\n");
fprintf(stderr, "Bruce M. Wink (bwink@quadrantsec.com)\t\tIdeas\n");


}


