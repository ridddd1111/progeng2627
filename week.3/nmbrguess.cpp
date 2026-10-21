#include <iostream>

int main (){
    int big {100}, small{1}, guess;
     char input;
    std::cout << "Hi, this programme will guess a number you pick from 1-100, if the guess is less than please type <, if it is greater than type > and if the guess is correct type = \n";
    while(input != '='){
        guess = (big + small) / 2;
        std::cout << "Is your number " << guess << "?\n";
        std::cin >> input;
        if (input == '<') {
            small = guess + 1;
        } else if (input == '>') {
            big = guess - 1;
        }
    }
}
  