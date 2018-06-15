CMAKE_MINIMUM_REQUIRED(VERSION 3.9.6)
PROJECT(TEST_APPVEYOR
    VERSION 0.0.1
    LANGUAGES C CXX)
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)

# Using C++ 11
SET(CMAKE_CXX_STANDARD 11)

# Set the build type
IF(NOT CMAKE_BUILD_TYPE)
  SET(CMAKE_BUILD_TYPE "Release" 
      CACHE STRING "Build configuration 'Release' or 'Debug'."
      FORCE)
ENDIF()

# Set the base directory to parent so src and include become equaly visible
SET(TEST_APPVEYOR_LIB_BASE_DIR ${PROJECT_SOURCE_DIR})
# Define source directory
SET(TEST_APPVEYOR_LIB_SRC "${TEST_APPVEYOR_LIB_BASE_DIR}/src")
# Define include directory
SET(TEST_APPVEYOR_LIB_INC "${TEST_APPVEYOR_LIB_BASE_DIR}/include")
# Library Name
SET(TEST_APPVEYOR_LIB "test-appveyor")

# build items in subdirectories
ADD_SUBDIRECTORY(src)

ENABLE_TESTING()
ADD_SUBDIRECTORY(test)
