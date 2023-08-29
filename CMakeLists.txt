cmake_minimum_required(VERSION 3.12)
project(options_pricing)

set(CMAKE_CXX_STANDARD 17)


add_library(option_lib STATIC 
            src/finite_difference_pricing.cpp 
            src/monte_carlo_pricing.cpp
            )

# Find Pybind11 package
#find_package(pybind11)
add_subdirectory(pybind11)


# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Create the Python extension module
pybind11_add_module(options_pricing ${PROJECT_SOURCE_DIR}/src/bindings.cpp ${PROJECT_SOURCE_DIR}/src/monte_carlo_pricing.cpp ${PROJECT_SOURCE_DIR}/src/finite_difference_pricing.cpp)

# Link against the required libraries
target_link_libraries(options_pricing PRIVATE option_lib)
