#ifndef PASTEUR_EDGE_H
#define PASTEUR_EDGE_H

#include "../include/point.h"
#include "../include/curve.h"
#include "../external/Eigen-3.3.4/Eigen/Dense"

namespace Pasteur {

	template <unsigned int num_points>
	class Edge : public Curve<num_points> {
	public:
		Edge();
		virtual ~Edge();

	private:
		Eigen::VectorXd

	};

}

#endif
