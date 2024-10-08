cmake_minimum_required(VERSION 3.20)
project(TravelManagement)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(CMAKE_TOOLCHAIN_FILE "C:/Users/LENOVO/vcpkg/scripts/buildsystems/vcpkg.cmake")

add_definitions(-D_WIN32_WINNT=0x0A00)

add_executable(travel_management 
    main.cpp
    src/Booiking.cpp
    src/Jamaah.cpp
    src/TravelPackage.cpp
    src/Payment.cpp
)