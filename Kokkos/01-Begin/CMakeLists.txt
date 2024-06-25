find_package(Kokkos REQUIRED)

file(GLOB_RECURSE SOURCES "*.cpp")

foreach(source ${SOURCES})
    get_filename_component(name ${source} NAME_WE)
    add_executable(${name} ${source})
    set_target_properties(${EXECUTABLE_NAME} PROPERTIES OUTPUT_NAME "${EXECUTABLE_NAME}.exe")
    target_link_libraries(${name} Kokkos::kokkos)
endforeach()