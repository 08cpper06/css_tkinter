cmake_minimum_required(VERSION 3.8)

project(css_tkinter)

add_subdirectory(pybind11)

pybind11_add_module(css_tkinter
	src/css_tkinter.cpp
	src/css_analyzer.cpp
)


target_include_directories(${PROJECT_NAME} PUBLIC ./include ./pybind11/include)
