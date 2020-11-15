#/*============================================================================
#
#  PHAS0100ASSIGNMENT3: PHAS0100 Assignment 3 package to demo MPI with CMake, CTest and Catch.
#
#  Copyright (c) University College London (UCL). All rights reserved.
#
#  This software is distributed WITHOUT ANY WARRANTY; without even
#  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
#  PURPOSE.
#
#  See LICENSE.txt in the top level directory for details.
#
#============================================================================*/

set(PHAS0100ASSIGNMENT3_LIBRARY_NAME ccmpi)

set(PHAS0100ASSIGNMENT3_LIBRARY_SRCS
  pa3MyFunctions.cpp
  pa3Exception.cpp
)

set(PHAS0100ASSIGNMENT3_LIBRARY_HDRS
  pa3ExceptionMacro.h
)

add_library(${PHAS0100ASSIGNMENT3_LIBRARY_NAME} ${PHAS0100ASSIGNMENT3_LIBRARY_HDRS} ${PHAS0100ASSIGNMENT3_LIBRARY_SRCS})

if(BUILD_SHARED_LIBS)
  if(WIN32)
    add_definitions(-DPHAS0100ASSIGNMENT3_WINDOWS_EXPORT)
  endif(WIN32)
endif(BUILD_SHARED_LIBS)

target_link_libraries(${PHAS0100ASSIGNMENT3_LIBRARY_NAME} PRIVATE ${ALL_THIRD_PARTY_LIBRARIES})

