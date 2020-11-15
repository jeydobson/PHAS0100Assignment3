/*=============================================================================

  PHAS0100ASSIGNMENT3: PHAS0100 Assignment 3 package to demo MPI with CMake, CTest and Catch.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#define CATCH_CONFIG_RUNNER  // This tells Catch we provide main.
#include "catch.hpp"
#include "pa3CatchMain.h"
#include <pa3ExceptionMacro.h>
#include <mpi.h>

// Global! Only do this in a private test harness.
namespace pa3
{
int argc;
char** argv;
}

int main (int argc, char * argv[])
{
  int sessionReturnCode = EXIT_FAILURE;

  // Must be first MPI call
  MPI_Init(&argc, &argv);

  try
  {

    for (int i = 0; i < argc; i++)
    {
      std::cout << "Argument " << i << "/" << argc << ":" << argv[i] << std::endl;
    }

    pa3::argc = argc;
    pa3::argv = argv;

    Catch::Session session; // There must be exactly once instance

    int tmpArgc = 1;
    char *tmpCommandName = new char[256];
    strcpy(tmpCommandName, argv[0]);

    int returnCode = session.applyCommandLine(tmpArgc, &tmpCommandName);
    if(returnCode != 0) // Indicates a command line error
      return returnCode;

    sessionReturnCode = session.run();

    delete [] tmpCommandName;

  }
  catch (pa3::Exception& e)
  {
    std::cerr << "Caught pa3::Exception: " << e.GetDescription() << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << "Caught std::exception: " << e.what() << std::endl;
  }

  // Must be last MPI call
  MPI_Finalize();

  return sessionReturnCode;
}

