cmake_minimum_required(VERSION 3.24)
project(algos_cmake_example)

set(CMAKE_CXX_STANDARD 17)

file(GLOB sources *.cpp)

configure_file(test_for_tasks test_for_tasks COPYONLY)

foreach(X IN LISTS sources)
    string(REGEX MATCH "[^/]*\\.cpp"  OUT ${X})
    add_executable(${OUT} ${OUT})
    target_compile_definitions(${OUT} PRIVATE local_machine="${OUT}")
endforeach()