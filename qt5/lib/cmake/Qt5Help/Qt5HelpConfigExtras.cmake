
if (NOT TARGET Qt5::qcollectiongenerator)
    add_executable(Qt5::qcollectiongenerator IMPORTED)

    set(imported_location "/scratch/build/mxe-octave-w64-32-release/usr/bin/qcollectiongenerator")
    _qt5_Help_check_file_exists(${imported_location})

    set_target_properties(Qt5::qcollectiongenerator PROPERTIES
        IMPORTED_LOCATION ${imported_location}
    )
endif()

if (NOT TARGET Qt5::qhelpgenerator)
    add_executable(Qt5::qhelpgenerator IMPORTED)

    set(imported_location "/scratch/build/mxe-octave-w64-32-release/usr/bin/qhelpgenerator")
    _qt5_Help_check_file_exists(${imported_location})

    set_target_properties(Qt5::qhelpgenerator PROPERTIES
        IMPORTED_LOCATION ${imported_location}
    )
endif()
