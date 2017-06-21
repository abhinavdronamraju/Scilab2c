/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "cat.h"

void		srowcats(float in1, float in2, float *out) {
  out[0] = in1;
  out[1] = in2;
}

void		scolumncats(float in1, float in2, float *out) {
  out[0] = in1;
  out[1] = in2;
}
