CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(demo)


## opencv ----------------------------------------------------------------------
FIND_PACKAGE( OpenCV REQUIRED )
INCLUDE_DIRECTORIES(${OpenCV_HEADERS})

## source code -----------------------------------------------------------------
SET(PATH_INC ${demo_SOURCE_DIR}/include)
SET(PATH_SRC ${demo_SOURCE_DIR}/src)
INCLUDE_DIRECTORIES(${PATH_INC})
AUX_SOURCE_DIRECTORY(${PATH_SRC} SRC_LIST)

## build and link --------------------------------------------------------------
ADD_EXECUTABLE(demo ${SRC_LIST})
TARGET_LINK_LIBRARIES(demo ${OpenCV_LIBS})
