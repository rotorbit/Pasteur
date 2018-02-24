#ifndef PASTEUR_UNSTRUCTURED_MESH_H
#define PASTEUR_UNSTRUCTURED_MESH_H

#include <vector>
#include <string>
#include <iostream>

#include "../lib/metis-5.1.0/include/metis.h"

#include "node.h"
#include "edge.h"
#include "face.h"
#include "cell.h"

#include "mesh-definitions.h"


namespace pasteur {

    class UnstructuredMesh {
	public:
		typedef typename std::vector<Node>::iterator it_global_nodes;
		typedef typename std::vector<Edge>::iterator it_global_edges;
		typedef typename std::vector<Face>::iterator it_global_faces;
		typedef typename std::vector<Cell>::iterator it_global_cells;

	public:
		UnstructuredMesh();
		virtual ~UnstructuredMesh();

		const it_global_nodes get_it_global_nodes() const;
		const it_global_edges get_it_global_edges() const;
		const it_global_faces get_it_global_faces() const;
		const it_global_cells get_it_global_cells() const;

		void set_input_format(MeshFormat input_format);
		void set_output_format(MeshFormat output_format);

		void set_input_path(std::string input_path);
		void set_output_path(std::string output_path);

		void WriteMesh();
		void WriteMesh(std::string output_path, MeshFormat output_format);


	protected:

		unsigned int num_global_nodes_;
		unsigned int num_global_edges_;
		unsigned int num_global_faces_;
		unsigned int num_global_cells_;
		unsigned int num_global_boundaries_;

		std::vector<Node> global_nodes_;
		std::vector<Edge> global_edges_;
		std::vector<Face> global_faces_;
		std::vector<Cell> global_cells_;

		MeshFormat input_format_;
		MeshFormat output_format_;

		std::string input_path_;
		std::string output_path_;



	};

}

#endif
