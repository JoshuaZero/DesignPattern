cmake_minimum_required(VERSION 3.12)
project(DesignPattern)

if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "FATAL In-source builds are not allowed.
        You should create a separate directory for build files.")
endif ()

if ("${CMAKE_BUILD_TYPE}" STREQUAL "Release")
    set(CMAKE_CXX_FLAGS  "-pthread -std=c++14 -O3 -g3 -Wall -fmessage-length=0 -fPIC")
else()
    set(CMAKE_CXX_FLAGS  "-pthread -std=c++14 -O0 -g3 -Wall -fmessage-length=0 -fPIC")
endif ()


aux_source_directory(${CMAKE_SOURCE_DIR}/src/Factory APP_FACTORY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/AbstractFactory APP_ABSTRACTFACT)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Adaper APP_ADAPER)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Bridge APP_BRIDGE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Builder APP_BUILDER)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Composite APP_COMPOSITE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Decorator APP_DECORATOR)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Facade APP_FACADE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Factory APP_FACTORY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Flyweight APP_FLYWEIGHT)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Prototype APP_PROTOTYPE)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/proxy APP_PROXY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Singleto APP_SINGLETON)

aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/ADT_stack APP_ADTSTACK)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/Array APP_ARRAY)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/function APP_FUNCTION)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/FunctionPointer APP_FUNCPTR)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/limits APP_LIMITS)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/Base_problem/threadpool APP_THREADPOOL)

add_executable(DesignPattern main.cpp ${APP_FACTORY} ${APP_ABSTRACTFACT} ${APP_ADAPER} )