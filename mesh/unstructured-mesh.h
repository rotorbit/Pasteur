#ifndef PASTEUR_UNSTRUCTURED_MESH_H
#define PASTEUR_UNSTRUCTURED_MESH_H

#include <vector>

#include "node.h"
#include "edge.h"
#include "face.h"

namespace Pasteur {

	class UnstructuredMesh {
	public:
		UnstructuredMesh();
		virtual ~UnstructuredMesh();

	protected:
		std::vector<Node> global_nodes_;
		std::vector<Face> global_faces_;



	};

}

#endif
