#ifndef PASTEUR_EDGE_H
#define PASTEUR_EDGE_H

#include <array>
#include <vector>

#include "../external/Eigen-3.3.4/Eigen/Dense"
#include "../geometry/line.h"
#include "../geometry/point.h"

namespace pasteur {

	class Edge {

	public:
		Edge();
		virtual ~Edge();

		const unsigned int get_index() const;
		virtual void set_index(unsigned int &index);


	private:
		unsigned int index_;
		std::vector<int> face_indices_;
		std::vector<int> cell_indices_;

	};

}

#endif
