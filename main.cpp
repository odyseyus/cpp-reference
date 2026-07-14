#include <iostream>

int main() 
{
    std::cout << sizeof(int) << "\n";  
    std::cout << sizeof(ulong) << "\n"; 
    std::cout << sizeof(long long) << "\n";
    std::cout << sizeof(void *) << "\n";


    int age;
    age = 30;

    std::cout << age << "\n";
    
    age = 50;

    std::cout << age << "\n";

    return 0;
}
