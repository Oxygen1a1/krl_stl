#include "base.h"
#include "./vector.h"
#include "string.h"

auto unload(PDRIVER_OBJECT) -> void {

	
}




EXTERN_C auto DriverEntry(PDRIVER_OBJECT drv, PUNICODE_STRING)->NTSTATUS {

	drv->DriverUnload = unload;

	auto s = krl_std::string();
	auto s1 = krl_std::string("hahahahha!");
	auto s2 = krl_std::string(s1);
	auto s3 = krl_std::string(10, 'c');

	auto s4 = s + s1;
	auto s5 = s2 + s3;
	//test string
	DbgPrintEx(77, 0, "s.size() : %d\r\n", s.length());
	DbgPrintEx(77, 0, "s1.size() : %d\r\n", s1.length());
	DbgPrintEx(77, 0, "s2.size() : %d\r\n", s2.length());
	DbgPrintEx(77, 0, "s3.size() : %d\r\n", s3.length());
	DbgPrintEx(77, 0, "s4.size() : %d\r\n", s4.length());
	DbgPrintEx(77, 0, "s5.size() : %d\r\n", s5.length());




	s1 += s3;
	DbgPrintEx(77, 0, "new s1.size() : %d\r\n", s1.length());

	if (s1 != s2) DbgPrintEx(77, 0, "s1!=s2\r\n");

	//print test
	DbgPrintEx(77, 0, "%s\r\n", s.c_str());
	DbgPrintEx(77, 0, "%s\r\n", s1.c_str());
	DbgPrintEx(77, 0, "%s\r\n", s2.c_str());
	DbgPrintEx(77, 0, "%s\r\n", s3.c_str());
	DbgPrintEx(77, 0, "%s\r\n", s4.c_str());

	//index test

	DbgPrintEx(77, 0, "s1[3]=%c\r\n", s1[3]);


	//sub str and find
	auto s6 = krl_std::string("woshigou");
	if (s6 == "woshigou") DbgPrintEx(77, 0, "[+]woshigou\r\n");

	DbgPrintEx(77, 0, "s6.substr(2,4)=%s\r\n", s6.substr(s6.find("shi"), 4).c_str());
	/*drv->DriverUnload = unload;
	auto a = krl_std::vector<_test_t>(76,{55,66,77,"hahah1"});




	for (auto i = a.begin(); i != a.end(); i++) {

		DbgPrintEx(77, 0, "[+] %s \r\n",i->hha);

	}

	auto b = krl_std::vector<_test_t>();


	for (auto i = 0; i < 512; i++) b.push_back({ 88,99,11,"xxx" });

	for (auto i = b.begin(); i != b.end(); i++) {

		DbgPrintEx(77, 0, "[+] %s \r\n", i->hha);

	}*/

	
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