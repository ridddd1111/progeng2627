#include <iostream>

int main()
{
    double n, product{1};
    std::cin >> n;
    while(n > 0)
    {
        product = n * product;
        n = n - 1;
    }
    std::cout << product << '\n';
    return 0;

}