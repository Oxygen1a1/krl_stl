#include "base.h"
#pragma warning (disable : 4996)

void* operator new(size_t size) {
	
	return ExAllocatePoolWithTag(PagedPool, size, NEW_FLAGS);

}

void* operator new[](size_t size) {
	
	return ExAllocatePoolWithTag(PagedPool, size, NEW_FLAGS);
}

void operator delete(void* ptr) {

	__try {

		ExFreePool(ptr);
	}
	__except(1){

		DBG_PRINT("delete err!\r\n", true);
	}
}

void operator delete[](void* ptr) {

	__try {

		ExFreePool(ptr);
	}
	__except (1) {

		DBG_PRINT("delete err!\r\n", true);
	}
}