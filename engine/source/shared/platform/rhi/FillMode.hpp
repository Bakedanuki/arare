#ifndef ARARE_FILLMODE_HPP
#define ARARE_FILLMODE_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Specifies the fill of the surface.
enum class FillMode : UInt8
{
  Wireframe,
  Solid,
};

}  // namespace arare

#endif
