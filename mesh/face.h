#ifndef PASTEUR_FACE_H
#define PASTEUR_FACE_H

#include <array>
#include <vector>

#include "../geometry/plane.h"

namespace Pasteur {

	class Face : public Plane {
	public:
		Face();
		virtual ~Face();

	protected:
		unsigned int index_;
		std::vector<unsigned int> node_indices_;
		std::vector<unsigned int> edge_indices_;
	};

}

#endif
