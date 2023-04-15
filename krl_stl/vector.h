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
		//vector��������ָ��
		//strat end end_of_storge ������ټ���

	private:
		T* _Start;
		T* _End;
		T* _End_of_storage;
		template _Alloc data_allocator;
		//ģ��������� ������ȡ(traits)
	public:
		
		typedef T value_type;
		typedef value_type* pointer;
		typedef value_type* iterator;
		typedef T& reference;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;//�����ж�x64����

	public:

		//���캯������������
		vector();
		//��ҪT��Ĭ�Ϲ���
		vector(size_t n, _T val=_T());
		vector(iterator first, iterator last);
		//��������
		vector(const vector<_T, allocator<_T>>& rhs);
		

		//vector����ռ�
		auto destory_and_deallocate() -> void;
		//reallocate �ռ䲻�� ���¼�
		auto reallocate() -> void;

		//��Ա����
		auto capacity() -> u32;
		auto size() -> u32;
		auto front() -> T&;
		auto back() -> T&;
		auto push_back(const T& value) -> void;
		auto pop_back() -> void;
		auto clear() -> void;
		
		//����operator


		
	};
	


}

