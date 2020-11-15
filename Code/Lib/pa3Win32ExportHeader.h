/*=============================================================================

  PHAS0100ASSIGNMENT3: PHAS0100 Assignment 3 package to demo MPI with CMake, CTest and Catch.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pa3Win32ExportHeader_h
#define pa3Win32ExportHeader_h

/**
* \file pa3Win32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(PHAS0100ASSIGNMENT3_STATIC)
  #ifdef PHAS0100ASSIGNMENT3_WINDOWS_EXPORT
    #define PHAS0100ASSIGNMENT3_WINEXPORT __declspec(dllexport)
  #else
    #define PHAS0100ASSIGNMENT3_WINEXPORT __declspec(dllimport)
  #endif  /* PHAS0100ASSIGNMENT3_WINEXPORT */
#else
/* linux/mac needs nothing */
  #define PHAS0100ASSIGNMENT3_WINEXPORT
#endif

#endif
