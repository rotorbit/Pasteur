cmake_minimum_required(VERSION 3.5)
project(pasteur)

set(CMAKE_CXX_STANDARD 11)


add_library(pasteur pasteur.h 
		src/point.cpp include/point.h)