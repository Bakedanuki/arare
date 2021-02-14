#ifndef ARARE_BLENDOPERATION_HPP
#define ARARE_BLENDOPERATION_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Specifies the blend operation of the render target.
enum class BlendOperation : UInt8
{
  Add,
  Subtract,
  ReverseSubtract,
  Min,
  Max,
};

}  // namespace arare

#endif
