#include "../mesh/face.h"

namespace pasteur {

	Face::Face() = default;

	Face::~Face() = default;

	Face::Face(unsigned int mesh_index) : mesh_index_(mesh_index) {};


}
