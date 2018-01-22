#include "../include/curve.h"

namespace Pasteur {

	template <int num_points>
	Curve<num_points>::Curve() = default;

	template <int num_points>
	Curve<num_points>::~Curve() = default;

	template <int num_points>
	Curve<num_points>::Curve(int &point_index0, int &point_index1) {
		point_indices_[0] = point_index0;
		point_indices_[1] = point_index1;
	}

	template <int num_points>
	Curve<num_points>::Curve(int &index, std::array<int, num_points> &point_indices) : index_(index),
			point_indices_(point_indices){}


	template <int num_points>
	const unsigned int Curve<num_points>::get_index(){
		return index_;
	}

	template <int num_points>
	const std::array<int, num_points> Curve<num_points>::get_point_indices() const{
		return point_indices_;
	}



}
