#include <iostream>

int main()
{
    double input, sum;
    sum = 0;
    std::cin >> input;

    while (input != 0)
    {
        sum = input + sum;
        std::cout << sum << '\n';
        std::cin >> input;
    }
    return 0;
}
