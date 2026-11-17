#include <string>
	
struct device
{
	int addr;
	std::string name;
};

void print_device(const device& d);
void by_value(device d);
void by_ref(device& d);
void by_ptr(device* d);
