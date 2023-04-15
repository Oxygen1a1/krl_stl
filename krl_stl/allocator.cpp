#include "allocator.h"

template<typename T>
inline auto allocator<T>::allocate(size_t size) -> T*
{
	auto ptr=ExAllocatePool2(POOL_FLAG_PAGED, size, tags);

	if (ptr == 0) {

		DBG_PRINT("allocator fails to alloc memory!\r\n", true);
		return nullptr;
	}

	return ptr;
}

template<typename T>
auto allocator<T>::deallocate(T* ptr) -> void
{
	if (MmIsAddressValid(ptr)) {

		__try {

			ExFreePool(ptr);

		}
		__except (1) {

			DBG_PRINT("allocator fails to free mem!\r\n", true);

		}

	}

}
