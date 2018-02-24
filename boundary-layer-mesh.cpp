#include <iostream>
#include <assert.h>
#include <sstream>
#include <string>

#include "pasteur.h"



int main(int argc, char* argv[]) {


	assert((argc == 3) &&
			"Usage: ./bl-mesh.x stl /path/to/my/mesh.stl num_layers total_height");

	std::stringstream ss1, ss2;
	std::string mesh_format, mesh_file;

	ss1 << argv[1];
	ss1 >> mesh_format;

	ss2 << argv[2];
	ss2 >> mesh_file;

	//Pasteur::UnstructuredMesh<2> simple_stl;
	//simple_stl.set_input_mesh_format(mesh_format);

	//Pasteur::UnstructuredMesh<2> simple_stl;
	//simple_stl.set_input_mesh_file(mesh_file);


    return 0;
}
