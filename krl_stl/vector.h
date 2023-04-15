#pragma once
#include "base.h"
#include "allocator.h"
namespace krl_std{
	
	template <typename _T>
	class _vector_iterator {


	};


	template <typename _T, typename _Alloc = allocator<_T>>
	class vector
	{
		//vector保存三个指针
		//strat end end_of_storge 方便快速计算

	private:
		T* _Start;
		T* _End;
		T* _End_of_storage;
		template _Alloc data_allocator;
		//模板所必须的 用于萃取(traits)
	public:
		
		typedef T value_type;
		typedef value_type* pointer;
		typedef value_type* iterator;
		typedef T& reference;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;//可以判断x64环境

	public:

		//构造函数和析构函数
		vector();
		//需要T有默认构造
		vector(size_t n, _T val=_T());
		vector(iterator first, iterator last);
		//拷贝构造
		vector(const vector<_T, allocator<_T>>& rhs);
		

		//vector清除空间
		auto destory_and_deallocate() -> void;
		//reallocate 空间不够 重新加
		auto reallocate() -> void;

		//成员函数
		auto capacity() -> u32;
		auto size() -> u32;
		auto front() -> T&;
		auto back() -> T&;
		auto push_back(const T& value) -> void;
		auto pop_back() -> void;
		auto clear() -> void;
		
		//重载operator


		
	};
	


}

