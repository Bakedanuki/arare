#ifndef ARARE_CULLMODE_HPP
#define ARARE_CULLMODE_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Specifies the cull.
enum class CullMode : UInt8
{
  None,
  Front,
  Back,
};

}  // namespace arare

#endif
