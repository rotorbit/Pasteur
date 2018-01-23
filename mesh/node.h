#ifndef PASTEUR_NODE_H
#define PASTEUR_NODE_H

#include <vector>

#include "../geometry/point.h"

namespace Pasteur {

	class Node : public Point {
	public:
		Node();
		virtual ~Node();

		Node(unsigned int index);

	protected:
		unsigned int index_;
		unsigned int valence_;
		std::vector<unsigned int> face_indices_;
		std::vector<unsigned int> cell_indices_;

	};

}

#endif
