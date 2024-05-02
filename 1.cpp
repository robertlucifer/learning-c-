// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int x=10;
    int *y=&x;
    
    
    std::cout<<++*y;
    std::count<<"Helo worlds";
    return 0;
}


//*y is used to mention that the variable is a pointer which doesn't hold any value, but it holds the address of the other variable, so if any operation is done on the pointer will occur in the pointing variable