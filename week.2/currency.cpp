#include <iostream>

int main()
{
    double m, conv;
    std::cout << "Hi, this programme coverts GBP to Euros, please enter the amount you wish to convert.\n";
    std::cin >> m;
    std::cout << "Pls enter current rate \n";
    std::cin >> conv;
    std::cout << "Your money will be converted to " << m * conv << " Euros";
    return 0;
}