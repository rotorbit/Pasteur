#include "../geometry/point.h"

namespace Pasteur {


    Point::Point(const std::array<double, 3> &coordinates):
            coordinates_(coordinates) {}

    Point::Point() {
        coordinates_ = {0.0};
    }


    Point::~Point() = default;


    const std::array<double, 3> &Point::get_coordinates() const {
        return coordinates_;
    };

    void Point::set_coordinates_(const std::array<double, 3> &coordinates) {
        coordinates_ = coordinates;
    }

    bool Point::operator==(const Point &rhs) const {
        return coordinates_ == rhs.coordinates_;
    }

    bool Point::operator!=(const Point &rhs) const {
        return !(rhs == *this);
    }

    Point Point::operator+(const Point &rhs) const {
        std::array<double, 3> sum = {0.0};
        Point p_sum;
        for (unsigned int i = 0; i < 3; i++) {
            sum[i] = coordinates_[i] + rhs.coordinates_[i];
        }
        p_sum.set_coordinates_(sum);
        return p_sum;
    }

    Point Point::operator-(const Point &rhs) const {
        std::array<double, 3> diff = {0.0};
        Point p_diff;
        for (unsigned int i = 0; i < 3; i++) {
            diff[i] = coordinates_[i] - rhs.coordinates_[i];
        }
        p_diff.set_coordinates_(diff);
        return p_diff;
    }

    double Point::operator*(const Point &rhs) const {
        double scalar_product = 0.0;
        for (unsigned int i = 0; i < 3; i++) {
            scalar_product += coordinates_[i] * rhs.coordinates_[i];
        }
        return scalar_product;
    }

    double Point::operator||(const Point &rhs) const {
        double distance = 0.0;
        for (unsigned int i = 0; i < 3; i++) {
            distance += pow((coordinates_[i] - rhs.coordinates_[i]), 2);
        }
        return sqrt(distance);
    }

    // TODO this overloaded operator only returns reasonable normal vector in x-y plane

    Point Point::operator|=(const Point &rhs) const {
        Point p_normal;
        std::array<double, 3> diff = {0.0};
        for (unsigned int i = 0; i < 3; i++) {
            diff[i] = rhs.coordinates_[i] - coordinates_[i];
        }

        auto x = diff[0];
        auto y = diff[1];
        auto z = diff[2];

        std::array<double, 3> normal{};
        normal[0] = y;
        normal[1] = -1.0*x;
        normal[2] = z;
        p_normal.set_coordinates_(normal);

        return p_normal;
    }


    Point Point::operator*(const double &rhs) const {
        std::array<double, 3> multi = {0.0};
        Point p_multi;
        for (unsigned int i = 0; i < 3; i++) {
            multi[i] = rhs * coordinates_[i];
        }
        p_multi.set_coordinates_(multi);
        return p_multi;
    }

}
