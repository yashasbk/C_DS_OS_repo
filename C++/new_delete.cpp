#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int len{0};
    std::cout << "Enter the number of names:\n";
    std::cin >> len;
    std::string *ptr{new std::string[len]{}};
    for(int i=0;i<len;i++)
    {
        std::cout << "Enter the name "<<i+1<<'\n';
        std::cin >> *(ptr+i);
        std::cout << "Entered name is "<< *(ptr+i)<<'\n';
    }
    std::sort(ptr,ptr+len);
    std::cout << "Sorted names:\n";
    for(int i=0;i<len;i++)
    {
        std::cout << *(ptr+i)<<'\n';
    }
    delete[] ptr; 
    std::cout <<"Memory deallocated successfully\n";
    return 0;
}