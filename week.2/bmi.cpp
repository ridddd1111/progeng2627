#include <iostream>

int main()
{
    double w, h;
    std::cout << "Hi, please enter your weight in kilograms\n";
    std::cin >> w;
    std::cout << "Now please enter your height in metres\n";
    std::cin >> h;
    double c{h * h};
    std::cout << "Your BMI is " << w / c << '\n';
    return 0;
}