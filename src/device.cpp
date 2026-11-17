#include "device.h"
#include <iostream>

void print_device(const device& d)
{
	std::cout << "name:" <<  d.name << ",addr:" << d.addr << std::endl;
}

void by_value(device d)
{
	d.addr = 100;
}

void by_ref(device& d)
{
	d.addr = 200;
}

void by_ptr(device* d)
{
	if (d != nullptr)
	{
		d->addr = 300;
	}
}