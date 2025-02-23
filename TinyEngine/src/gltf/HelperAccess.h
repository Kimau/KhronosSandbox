#ifndef GLTF_HELPERACCESS_H_
#define GLTF_HELPERACCESS_H_

#include <cstdint>

#include "GLTF.h"

class HelperAccess {
public:

	static const uint8_t* accessData(const Buffer& buffer);

	static const uint8_t* accessData(const BufferView& bufferView);
	static uint32_t getOffset(const BufferView& bufferView);

	static const uint8_t* accessData(const Accessor& accessor);
	static uint32_t getOffset(const Accessor& accessor);
	static uint32_t getRange(const Accessor& accessor);
	static uint32_t getStride(const Accessor& accessor);

	static const uint8_t* accessData(const Image& image, uint32_t index = 0);
};

#endif /* GLTF_HELPERACCESS_H_ */
