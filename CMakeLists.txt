cmake_minimum_required(VERSION 3.16)

project(project_template VERSION 0.0.1
                    DESCRIPTION "Template for new C++ projects"
                    LANGUAGES CXX C)

if(NOT CMAKE_BUILD_TYPE)
    message(WARNING "CMAKE_BUILD_TYPE is not defined!")
endif()

add_library(cxx_setup INTERFACE)
target_compile_options(cxx_setup
  INTERFACE -Wall -Wpedantic -Wextra)
target_compile_features(cxx_setup INTERFACE cxx_std_17)
target_include_directories(cxx_setup
  INTERFACE ${PROJECT_SOURCE_DIR})

# 🚨 Make sure CMakeLists.txt file exists in the subdirectories!
add_subdirectory(${PROJECT_NAME})
add_subdirectory(app)
add_subdirectory(external)

# 💡 Some things (e.g. tests or installation) are missing here.
# 💡 Stay tuned for these in future lectures!