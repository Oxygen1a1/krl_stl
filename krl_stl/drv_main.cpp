#include "base.h"
#include "./vector.h"

auto unload(PDRIVER_OBJECT) -> void {

	
}


struct _test_t {
	int a;
	int b;
	int c;
	char hha[100];
};

EXTERN_C auto DriverEntry(PDRIVER_OBJECT drv, PUNICODE_STRING)->NTSTATUS {

	
	drv->DriverUnload = unload;
	auto a = krl_std::vector<_test_t>(76,{55,66,77,"hahah1"});




	for (auto i = a.begin(); i != a.end(); i++) {

		DbgPrintEx(77, 0, "[+] %s \r\n",i->hha);

	}

	auto b = krl_std::vector<_test_t>();


	for (auto i = 0; i < 512; i++) b.push_back({ 88,99,11,"xxx" });

	for (auto i = b.begin(); i != b.end(); i++) {

		DbgPrintEx(77, 0, "[+] %s \r\n", i->hha);

	}

	
	//auto a = krl_std::vector<int>();

	//drv->DriverUnload = unload;
	////__debugbreak();
	//a.push_back(555);
	//a.push_back(666);
	//a.push_back(777);

	//for (auto iter = a.begin(); iter != a.end(); iter++) {

	//	
	//	DbgPrintEx(0, 0, "%d\r\n", *iter);
	//}


	////auto tmp = a.begin();
	//a.insert(a.begin(), 888);
	//a.insert(a.begin(), 999);


	////øΩ±¥ππ‘Ï
	//auto assign = krl_std::vector<int>(a);

	//assign.push_back(789789);
	//assign.push_back(666);

	////a.clear();

	//auto _iter = a.find(888);
	//


	//for (auto iter = assign.begin(); iter != assign.end(); iter++) {

	//	DbgPrintEx(77, 0, "[+]assign = %d\r\n", *iter);

	//}

	////_iter;
	//KdPrint(("[+]_iter = %p,*iter=%d\r\n",_iter,*_iter));



	return STATUS_SUCCESS;
}