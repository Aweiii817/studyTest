#include "device.h"

void print_device(const device& d)
{
	std::cout << d.name << "@" << d.addr << std::endl;
}