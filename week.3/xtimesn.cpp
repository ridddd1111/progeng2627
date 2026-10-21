#include <iostream>

int main ()
{
    double x , acc{0};
    int mult, counter {0};
    
    std::cin >> x >> mult;

    while (counter < mult){
        acc = x + acc;
        counter = counter + 1;

    }
    std::cout << x << " times " << mult << " = " << acc << '\n';
    return 0;
}