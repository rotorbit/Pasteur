#ifndef PASTEUR_UNSTRUCTURED_MESH_H
#define PASTEUR_UNSTRUCTURED_MESH_H

#include <vector>
#include <string>

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

		void set_input_mesh_format(MeshFormat input_mesh_format);
		void set_output_mesh_format(MeshFormat output_mesh_format);

		void set_input_mesh_path(std::string input_mesh_path);
		void set_output_mesh_path(MeshFormat output_mesh_path);

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

		std::string input_mesh_path;
		std::string output_mesh_path;

		MeshFormat input_mesh_format_;
		MeshFormat output_mesh_format_;

	};

}

#endif
