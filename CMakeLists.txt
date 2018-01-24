cmake_minimum_required(VERSION 3.5)
project(pasteur)


option(USE_CPP17 "Use C++17 with GCC 4.9+"       off)
option(USE_MPI   "Use Message Passing Interface" off)
option(USE_CUDA  "Use CUDA toolkit"              off)

if (USE_CPP17)
  set(CMAKE_CXX_STANDARD 17)
else()
  set(CMAKE_CXX_STANDARD 11)
endif()
	
configure_file (
  "${PROJECT_SOURCE_DIR}/pasteur-config.h.in"
  "${PROJECT_SOURCE_DIR}/pasteur-config.h"
  )


add_library(pasteur              pasteur.h

		geometry/geometry.h      geometry/geometry-definitions.h
		geometry/point.h	     geometry/point.cpp
		geometry/line.h	         geometry/line.cpp
		geometry/plane.cpp       geometry/plane.h
		
		mesh/mesh.h              mesh/mesh-definitions.h
		mesh/node.h              mesh/node.cpp
		mesh/edge.h              mesh/edge.cpp
		mesh/face.h         	 mesh/face.cpp
		mesh/cell.h              mesh/cell.cpp
		mesh/unstructured-mesh.h mesh/unstructured-mesh.cpp
		)
		
add_executable(bl-mesh.x         boundary-layer-mesh.cpp

		geometry/geometry.h      geometry/geometry-definitions.h
		geometry/point.h	     geometry/point.cpp
		geometry/line.h		     geometry/line.cpp
		geometry/plane.cpp       geometry/plane.h
		
		mesh/mesh.h              mesh/mesh-definitions.h
		mesh/node.h              mesh/node.cpp
		mesh/edge.h              mesh/edge.cpp
		mesh/face.h         	 mesh/face.cpp
		mesh/cell.h              mesh/cell.cpp
		mesh/unstructured-mesh.h mesh/unstructured-mesh.cpp
		)
