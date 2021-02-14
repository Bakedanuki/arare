#ifndef ARARE_FRONTFACE_HPP
#define ARARE_FRONTFACE_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Specifies the front of the surface.
enum class FrontFace : UInt8
{
  CounterClockwise,
  Clockwise,
};

}  // namespace arare

#endif
