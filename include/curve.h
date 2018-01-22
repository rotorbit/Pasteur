#ifndef PASTEUR_CURVE_H
#define PASTEUR_CURVE_H

#include <array>

namespace Pasteur {

	template<unsigned int num_points>
	class Curve {
	public:
		Curve();
		virtual ~Curve();

		Curve(unsigned  int &point_index0, unsigned  int &point_index1);
		Curve(unsigned  int &index, unsigned  int &point_index0, unsigned  int &point_index1);

		Curve(std::array<unsigned  int, num_points> &point_indices);
		Curve(unsigned  int &index, std::array<unsigned  int, num_points> &point_indices);

		const unsigned int get_index();
		const std::array<unsigned int, num_points> get_point_indices() const;

		virtual void set_index(unsigned int &index);
		virtual void set_point_indices(std::array<unsigned int, num_points> &point_indices);


	protected:
		unsigned int index_;
		std::array<unsigned int, num_points> point_indices_;
	};

}

#endif
