cmake_minimum_required(VERSION 3.5)
project(pasteur)

set(CMAKE_CXX_STANDARD 11)


add_library(pasteur 
		pasteur.h
		geometry/geometry.h
		geometry/point.h	     geometry/point.cpp
		geometry/line.h			 geometry/line.cpp
		
		mesh/mesh.h
		mesh/node.h              mesh/node.cpp
		mesh/edge.h              mesh/edge.cpp
		mesh/face.h         	 mesh/face.cpp
		mesh/unstructured-mesh.h mesh/unstructured-mesh.cpp
		)
		
add_executable(bl-mesh.x 
		pasteur.h                boundary-layer-mesh.cpp
		geometry/geometry.h
		geometry/point.h	     geometry/point.cpp
		geometry/line.h			 geometry/line.cpp
		
		mesh/mesh.h
		mesh/node.h              mesh/node.cpp
		mesh/edge.h              mesh/edge.cpp
		mesh/face.h         	 mesh/face.cpp
		mesh/unstructured-mesh.h mesh/unstructured-mesh.cpp
		)		
		