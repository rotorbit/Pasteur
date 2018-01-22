#include "../include/curve.h"

namespace Pasteur {

	template <unsigned int num_points>
	Curve<num_points>::Curve() = default;

	template <unsigned int num_points>
	Curve<num_points>::~Curve() = default;

	template <unsigned int num_points>
	Curve<num_points>::Curve(unsigned int &point_index0, unsigned int &point_index1) {
		point_indices_[0] = point_index0;
		point_indices_[1] = point_index1;
	}

	template <unsigned int num_points>
	Curve<num_points>::Curve(unsigned int &index, std::array<unsigned int, num_points> &point_indices) : index_(index),
			point_indices_(point_indices){}


	template <unsigned int num_points>
	const unsigned int Curve<num_points>::get_index(){
		return index_;
	}

	template <unsigned int num_points>
	const std::array<unsigned int, num_points> Curve<num_points>::get_point_indices() const{
		return point_indices_;
	}

	template <unsigned int num_points>
	void Curve<num_points>::set_index(unsigned int &index){
		index_ = index;
	}

	template <unsigned int num_points>
	void Curve<num_points>::set_point_indices(std::array<unsigned int, num_points> &point_indices){
		point_indices_ = point_indices;
	}


}
