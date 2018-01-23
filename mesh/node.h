#ifndef PASTEUR_NODE_H
#define PASTEUR_NODE_H

#include <vector>

#include "../geometry/point.h"

namespace Pasteur {

	class Node : public Point {
	public:
		Node();
		virtual ~Node();

	protected:
		int valence_;
		std::vector<int> face_indices_;
	};

}

#endif
