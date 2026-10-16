#include "st.h"
#include <iostream>
int main() {
st s{1,"tmp"};
std::cout<<s.name<<"@"<<s.addr<<std::endl;
return 0;
}
