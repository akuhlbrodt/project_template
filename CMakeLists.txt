cmake_minimum_required(VERSION 3.16)

project(project_template VERSION 0.0.1
                    DESCRIPTION "Template for new C++ projects"
                    LANGUAGES CXX C)

if(NOT CMAKE_BUILD_TYPE)
    message(WARNING "CMAKE_BUILD_TYPE is not defined!")
endif()

