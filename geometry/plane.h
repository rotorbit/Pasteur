#ifndef PASTEUR_PLANE_H
#define PASTEUR_PLANE_H

#include <array>
#include <vector>

namespace Pasteur {

    class Plane {

    protected:
        unsigned int index_;
        std::vector<int> line_indices_;
        double area_;
        std::vector<int> normal_;


    };

}


#endif
