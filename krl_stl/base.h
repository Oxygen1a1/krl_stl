#pragma once
#include <ntifs.h>
#include <ntddk.h>
#include <intrin.h>

using u64 = unsigned long long;
using u32 = unsigned long;
using u16 = unsigned short;
using u8 = unsigned char;
using s8 = char;

#define NEW_FLAGS 'Mnew'

void* operator new(size_t size);
void* operator new[](size_t size);
void operator delete(void* ptr);
void operator delete[](void* ptr);

#define DBG_PRINT(text,is_err,...) DbgPrintEx(77,0,"[krn_stl]:");\
	if(is_err)DbgPrintEx(77,0,"err,func_name:%s,line:%d   ",__FUNCTION__,__LINE__);\
	DbgPrintEx(77,0,text,__VA_ARGS__);