#ifndef PASTEUR_GEOMETRY_DEFINITIONS_H
#define PASTEUR_GEOMETRY_DEFINITIONS_H

#include <map>


namespace pasteur {

  enum class LineType {
	  LINE = 0,
	  SPLINE = 1,
	  BSPLINE = 2
  };

  std::map<LineType, std::string> line_type_geo_map;




}



#endif
