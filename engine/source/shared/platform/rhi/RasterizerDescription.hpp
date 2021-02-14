#ifndef ARARE_RASTERIZERDESCRIPTION_HPP
#define ARARE_RASTERIZERDESCRIPTION_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"
#include "shared/platform/primitive_data_types/PrimitiveDataValue.hpp"
#include "shared/platform/rhi/CullMode.hpp"
#include "shared/platform/rhi/FillMode.hpp"
#include "shared/platform/rhi/FrontFace.hpp"

namespace arare {

// Define rasterizer state.
struct RasterizerDescription final
{
  [[nodiscard]] static RasterizerDescription CreateDefaultValue() noexcept
  {
    RasterizerDescription rasterizerDescription;
    rasterizerDescription.fillMode = FillMode::Solid;
    rasterizerDescription.cullMode = CullMode::Back;
    rasterizerDescription.frontFace = FrontFace::CounterClockwise;
    rasterizerDescription.depthBias = 0;
    rasterizerDescription.depthBiasClamp = 0.0f;
    rasterizerDescription.slopeScaledDepthBias = 0.0f;
    rasterizerDescription.depthClipEnable = ARARE_TRUE;
    rasterizerDescription.multisampleEnable = ARARE_FALSE;

    return rasterizerDescription;
  }

  FillMode fillMode;
  CullMode cullMode;
  FrontFace frontFace;
  Int32 depthBias;
  Float32 depthBiasClamp;
  Float32 slopeScaledDepthBias;
  Bool depthClipEnable;
  Bool multisampleEnable;
};

}  // namespace arare

#endif
