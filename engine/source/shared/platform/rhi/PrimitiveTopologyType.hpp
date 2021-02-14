#ifndef ARARE_PRIMITIVETOPOLOGYTYPE_HPP
#define ARARE_PRIMITIVETOPOLOGYTYPE_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Specifies the interpretation of the vertices.
enum class PrimitiveTopologyType : UInt8
{
  Undefined,
  Point,
  Line,
  Triangle,
  Patch,
};

}  // namespace arare

#endif
