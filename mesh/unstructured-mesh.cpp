#include "unstructured-mesh.h"

namespace pasteur {

	UnstructuredMesh::UnstructuredMesh() {
		output_format_ = MeshFormat::MSH;
		output_path_ = "default_mesh_output.msh";
	}

	UnstructuredMesh::~UnstructuredMesh() = default;


	void UnstructuredMesh::set_input_format(MeshFormat input_format) {
		input_format_ = input_format;
	}


	void UnstructuredMesh::set_output_format(MeshFormat output_format) {
		output_format_ = output_format;
	}


	void UnstructuredMesh::set_input_path(std::string input_path) {
		input_path_ = input_path;
	}


	void UnstructuredMesh::set_output_path(std::string output_path) {
		output_path_ = output_path;
	}


	void UnstructuredMesh::WriteMesh() {

		switch(output_format_) {
		   case MeshFormat::MSH :
		      //WriteMSH();;
		      break;
		   case MeshFormat::STL :
		      //WriteSTL();
		      break;

		   default :
			  std::cout << "Unknown Mesh Format, aborting the program!" << std::endl;
		      exit(EXIT_FAILURE);
		}



	}


}
