/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include <math.h>
#include "fix.h"
#include "floor.h"
#include "ceil.h"

uint16	u16fixs(uint16 x) {
	if (x>=0) return u16floors(x);
	else return u16ceils(x);
}
