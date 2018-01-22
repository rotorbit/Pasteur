#ifndef PASTEUR_CURVE_H
#define PASTEUR_CURVE_H

#include <array>

namespace Pasteur {

	template<int num_points>
	class Curve {
	public:
		Curve();
		virtual ~Curve();

		Curve(int &point_index0, int &point_index1);
		Curve(int &index, int &point_index0, int &point_index1);

		Curve(std::array<int, num_points> &point_indices);
		Curve(int, &index, std::array<int, num_points> &point_indices);

		const unsigned int index &get_index() const;
		const std::array<int, num_points> point_indices &get_point_indices() const;

		virtual void set_index(unsigned int index);
		virtual void set_point_indices(std::array<int, num_points> point_indices);


	protected:
		unsigned int index_;
		std::array<int, num_points> point_indices_;
	};

}

#endif
