# Copyright (c) 2018 Shapelets.io
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

CMAKE_MINIMUM_REQUIRED(VERSION 3.9.6)
PROJECT(TEST_APPVEYOR_LIB)

FIND_PACKAGE(Eigen3 CONFIG REQUIRED)

# Compile with C++11 support.
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Files to add to compilation
FILE(GLOB_RECURSE TEST_APPVEYOR_LIB_CODE 
    "${TEST_APPVEYOR_LIB_SRC}/*.cpp"
    "${TEST_APPVEYOR_LIB_INC}/*.h" )

# The output is a static library
ADD_LIBRARY(${TEST_APPVEYOR_LIB} STATIC ${TEST_APPVEYOR_LIB_CODE} )

# Declare include directories
TARGET_INCLUDE_DIRECTORIES(${TEST_APPVEYOR_LIB} PUBLIC
                           $<BUILD_INTERFACE:${TEST_APPVEYOR_LIB_INC}>
                           $<INSTALL_INTERFACE:${KHIVA_INSTALL_INC_DIR}>
                           ${Eigen3_INCLUDE_DIRS})


# Declare compilation libraries
TARGET_LINK_LIBRARIES(${TEST_APPVEYOR_LIB}
                Eigen3::Eigen
                ${CMAKE_DL_LIBS})

# Add metadata
SET_TARGET_PROPERTIES(${TEST_APPVEYOR_LIB} PROPERTIES 
    VERSION ${VERSION_SHORT}
    SOVERSION ${VERSION_MAJOR}
    PUBLIC_HEADER "${TEST_APPVEYOR_LIB_INC}/test-appveyor.h")
