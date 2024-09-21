#include <iostream>

int main()
{
    long int a;
    std::cin >> a;
    if(a < 2147483647 && a > -2147483647) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
}
