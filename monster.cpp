#include <iostream>

int main(){
    std::cout << "Solve maths problems to beat the monster!\n";
    int your_hp{100}, damage, ans;
    int level{1};

    while(your_hp > 0){
        int monst_hp = 100 + (level - 1) * 25;
        std::cout << "Level " << level << "! The monster has " << monst_hp << " HP.\n";

        while(monst_hp > 0 && your_hp > 0){
            int x = rand() % 100 + 1;
            int y = rand() % 100 + 1;
            if(x > y){
                damage = x - y;
                std::cout << "What is " << x << " - " << y << "\n";
                std::cin >> ans;
                if(ans == (x-y)){
                    monst_hp = monst_hp - damage;
                    std::cout << "The monster has " << monst_hp << " HP remaining.\n";
                }
                else{
                    your_hp = your_hp - damage;
                    std::cout << "You have " << your_hp << " HP remaining.\n";
                }
            }
            if(x < y){
                damage = y - x;
                std::cout << "What is " << y << " - " << x << "\n";
                std::cin >> ans;
                if(ans == (y-x)){
                    monst_hp = monst_hp - damage;
                    std::cout << "The monster has " << monst_hp << " HP remaining.\n";
                }
                else{
                    your_hp = your_hp - damage;
                    std::cout << "You have " << your_hp << " HP remaining.\n";
                }
            }
        }

        if(your_hp > 0){
            std::cout << "You beat the monster! Moving to the next level.\n";
            level++;
        }
    }

    std::cout << "Game over!\n";
}