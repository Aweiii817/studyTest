#include "device.h"
#include <iostream>

void print_device(const device& d)
{
	std::cout << d.name << "@" << d.addr << std::endl;
}