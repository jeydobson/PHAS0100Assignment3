/*=============================================================================

  PHAS0100ASSIGNMENT3: PHAS0100 Assignment 3 package to demo MPI with CMake, CTest and Catch.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pa3ExceptionMacro_h
#define pa3ExceptionMacro_h

#include "pa3Exception.h"

#define pa3ExceptionThrow() throw pa3::Exception(__FILE__,__LINE__)

#endif
