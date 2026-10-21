#include <iostream>

int main()
{
    int x, n;
    std::cin >> x >> n;
    int product{x};
    if (n !=0){
        for(int i = 1 ; i < n ; i++)
        {
            product = x * product; 
        }
        std::cout << product;
    } else {
    std::cout << "1";
    }
    return 0;
}