#ifndef ARARE_LOGICOPERATION_HPP
#define ARARE_LOGICOPERATION_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Specifies the logical operation of the render target.
enum class LogicOperation : UInt8
{
  Clear,
  Set,
  Copy,
  CopyInverted,
  NoOperation,
  Invert,
  And,
  Nand,
  Or,
  Nor,
  Xor,
  Equivalent,
  AndReverse,
  AndInverted,
  OrReverse,
  OrInverted,
};

}  // namespace arare

#endif
