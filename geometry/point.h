#ifndef PASTEUR_POINT_H
#define PASTEUR_POINT_H

#include <array>
#include <cmath>
#include <math.h>
#include <ostream>
#include <assert.h>

namespace Pasteur {

	class Point {
    public:
        Point(const std::array<double, 3> &coordinates);
        Point();
        virtual ~Point();

        const std::array<double, 3> &get_coordinates() const;
        void set_coordinates_(const std::array<double, 3> &coordinates);

        bool operator==(const Point &rhs) const;
        bool operator!=(const Point &rhs) const;
        Point operator+(const Point &rhs) const;
        Point operator-(const Point &rhs) const;
        double operator*(const Point &rhs) const;
        Point operator*(const double &rhs) const;
        double operator||(const Point &rhs) const;
        Point operator|=(const Point &rhs) const;


    protected:
        std::array<double, 3> coordinates_;

    };

}


#endif
