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

#ifndef __INT_CVCORE_H__
#define __INT_CVCORE_H__

#ifdef  __cplusplus
extern "C" {
#endif


#include "types.h"


#define d0d0g2d0CV_CreateImageim0(width,height,depth,depth_size,no_of_ch) \
				imcvCreateImages(width,height,depth,no_of_ch)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__INT_CVCORE_H__*/