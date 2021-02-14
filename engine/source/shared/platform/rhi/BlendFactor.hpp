#ifndef ARARE_BLENDFACTOR_HPP
#define ARARE_BLENDFACTOR_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Specifies the blend factor of the render target.
enum class BlendFactor : UInt8
{
  Zero,
  One,
  SourceColor,
  InvertSourceColor,
  SourceAlpha,
  InvertSourceAlpha,
  DestinationColor,
  InvertDestinationColor,
  DestinationAlpha,
  InvertDestinationAlpha,
  SourceAlphaSaturate,
  ConstantColor,
  InvertConstantColor,
  Source1Color,
  InvertSource1Color,
  Source1Alpha,
  InvertSource1Alpha,
};

}  // namespace arare

#endif
