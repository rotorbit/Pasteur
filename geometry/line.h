#ifndef PASTEUR_LINE_H
#define PASTEUR_LINE_H

#include <array>

namespace pasteur {

	class Line {
	public:
		Line();
		virtual ~Line();

	protected:
		std::array<double, 3> normal_;
		double length_;

	};

}

#endif
