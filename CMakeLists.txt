cmake_minimum_required(VERSION 2.8.12)
project(test_proj LANGUAGES CXX CUDA)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# set(Qt5_DIR C:/Qt/Qt5.13.2/5.13.2/msvc2017_64/lib/cmake/Qt5)
# set(CMAKE_PREFIX_PATH C:/Qt/Qt5.13.2/5.13.2/msvc2017_64/lib/cmake)
# Find the QtCore library
find_package(Qt5 COMPONENTS Core Widgets Qml WebSockets Network RemoteObjects REQUIRED)
find_package(CUDA REQUIRED)
# find_package(Threads)

add_executable(main main.cpp)
message(STATUS "CONAN LIBS: ${CONAN_LIBS}")
target_link_libraries(main ${CONAN_LIBS} Qt5::Core Qt5::Widgets)
