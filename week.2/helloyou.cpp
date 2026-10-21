#include <iostream>
#include <string>

int main()
{
    std::cout << "Hi, what's your name?\n";
    std::string your_name;
    std::cin >> your_name;
    std::cout << "Hi " << your_name << "\n";
    return 0;
}