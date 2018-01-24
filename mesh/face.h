#ifndef PASTEUR_FACE_H
#define PASTEUR_FACE_H

#include <array>
#include <vector>

#include "../geometry/plane.h"

namespace pasteur {

    enum class FaceType {
		TRIANGLE = 0,
        QUAD4 = 1,
		QUAD9 = 2
	};

	class Face : public Plane {
	public:
		Face();
		virtual ~Face();

		Face(unsigned int index);

	protected:

		unsigned int mesh_index_;
        FaceType face_type_;
		std::vector<unsigned int> node_indices_;
		std::vector<unsigned int> edge_indices_;
	};

}

#endif
