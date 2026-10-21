#include <iostream>

int main()
{
    double input, sum{0}, counter{0}, average{0};
    std::cin >> input;

    while (input != 0 )
    {
        counter = counter + 1;
        sum = sum + input;
        average = sum / counter;
        std::cout << average << '\n';
        std::cin >> input;
    }
    return 0;
}