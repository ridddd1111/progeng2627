#include <iostream>

int main()
{
    double t;
    std::cout << "Hi, please enter the temperature in Celsius\n";
    std::cin >> t;
    std::cout << "The tempertaure in Farenheit is " << t * 1.8 + 32 << '\n';
    return 0;
}