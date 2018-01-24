#ifndef PASTEUR_PLANE_H
#define PASTEUR_PLANE_H

#include <array>
#include <vector>
#include <string>

namespace pasteur {

    class Plane {
    public:
    	Plane();
    	virtual ~Plane();



    protected:
        std::vector<int> line_indices_;
        double area_;
        std::vector<int> normal_;
        std::string physical_group_;

    private:
        unsigned int geometry_index_;


    };

}


#endif
