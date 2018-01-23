#ifndef PASTEUR_FACE_H
#define PASTEUR_FACE_H

#include <array>

namespace Pasteur {

	class Face {
	public:
		Face();
		virtual ~Face();

	protected:
		std::array<double, 3> normal_;
		double area_;
	};

}

#endif
