/*=============================================================================

  PHAS0100ASSIGNMENT3: PHAS0100 Assignment 3 package to demo MPI with CMake, CTest and Catch.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include "catch.hpp"
#include "pa3CatchMain.h"
#include <iostream>

TEST_CASE( "My first test", "[init]" ) {

  int expectedNumberOfArgs = 2;
  if (pa3::argc != expectedNumberOfArgs)
  {
    std::cerr << "Usage: mpMyFirstCatchTest fileName.txt" << std::endl;
    REQUIRE( pa3::argc == expectedNumberOfArgs);
  }
  REQUIRE(true);
}
