#include <iostream>

int main()

{
    double w, l;
    std::cout << "Hi, what is the value for your width\n";
    std::cin >> w;
    std::cout << "Now give me your value for length\n";
    std::cin >> l;
    std::cout << "Your area is " << w * l << '\n';
    std::cout << "Your perimeter is " << (w+l) * 2 << '\n';
    return 0;
}