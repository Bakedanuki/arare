#ifndef ARARE_NATIVEBUFFER_HPP
#define ARARE_NATIVEBUFFER_HPP

#include "shared/platform/primitive_data_types/PrimitiveDataType.hpp"

namespace arare {

// Define the buffer abstraction for each render system.
class NativeBuffer
{
public:
  NativeBuffer() = default;

  virtual ~NativeBuffer() = default;

  virtual Void Map(const Void* data, UInt32 size) const = 0;
  virtual Void Unmap() const = 0;
};

}  // namespace arare

#endif
