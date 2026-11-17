#include <string>
	
struct device
{
	int addr;
	std::string name;
};

void print_device(const device& d);
