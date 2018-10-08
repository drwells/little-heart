#include <iostream>

// IBAMR
#include <ibtk/AppInitializer.h>

// libMesh
#include <libmesh/libmesh.h>

// SAMRAI
#include <tbox/Utilities.h>
#include <tbox/SAMRAIManager.h>
#include <tbox/SAMRAI_MPI.h>

int main(int argc, char **argv)
{
    // Initialize libMesh, PETSc, MPI, and SAMRAI.
    libMesh::LibMeshInit init(argc, argv);
    SAMRAI::tbox::SAMRAI_MPI::setCommunicator(PETSC_COMM_WORLD);
    SAMRAI::tbox::SAMRAI_MPI::setCallAbortInSerialInsteadOfExit();
    SAMRAI::tbox::SAMRAIManager::startup();

    {
        IBTK::AppInitializer app_initializer(argc, argv, "logfile.log");
        TBOX_ASSERT(!app_initializer.isFromRestart());
        std::cout << "hello, world\n";
    }

    SAMRAI::tbox::SAMRAIManager::shutdown();
    return 0;
}
