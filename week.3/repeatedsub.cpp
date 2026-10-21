#include <iostream>

int main()
{
    double big, small, func {0}, counter{0};
    std::cin >> big >> small;
    func = big;
    bool poss;
    while ((func>small))
    {
        func = func - small;
        counter = counter + 1;
    }
    if (small > big)
    {
        std::cout << "Sorry no can do.";
    }
    else {
        std::cout << "Your number is equal to " << counter << " x " << small << " + " << func << '\n';
    }
}