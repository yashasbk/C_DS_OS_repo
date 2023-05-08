#include <iostream>

namespace thunder{
    int add(int first = 2,int second = 5)
    {
        return first + second;
    }
}

int main()
{
    int a(0),b(0);
    std::cout << "Enter value of a and b \n";
    std::cin >> a >> b;
    std::cout <<"The addition without passing arguments:"<< thunder::add() << std::endl;
    std::cout <<"The addition with arguments:"<< thunder::add(a,b) << std::endl;
    std::cout <<"The addition with passing only one argument:"<< thunder::add(a) << std::endl;
}