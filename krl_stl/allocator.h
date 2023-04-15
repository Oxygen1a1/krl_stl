#pragma once
#include "base.h"
template<typename T>
class allocator
{
	const u32 tags = 'allo';
public:
	auto allocate(size_t size) -> T*;
	auto deallocate(T* ptr) -> void;
};


