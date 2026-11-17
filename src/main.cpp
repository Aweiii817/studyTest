#include "device.h"
#include <iostream>

int main() {
	device d1{1,"tmp"};
	std::cout << "原始：" << std::endl;
	print_device(d1);
	std::cout << "值传递：" << std::endl;
	by_value(d1);
	print_device(d1);
	std::cout << "引用传递：" << std::endl;
	by_ref(d1);
	print_device(d1);
	std::cout << "指针传递：" << std::endl;
	by_ptr(&d1);
	print_device(d1);
	return 0;
}
