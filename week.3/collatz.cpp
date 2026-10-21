#include <iostream>

int main(){
    int x, count, max;
    std::cin >> x;
    if(x % 2 == 0){
        max = x;
        for(int i = 1; x !=1; i++){
            x = x / 2;
            std::cout << x << '\t';
            count = i;
        }
    }
    else{
        x = 3 * x + 1;
        max = x;
        std::cout << x << '\t';
        for(int i = 2; x != 1; i++){
            x = x / 2;
            std::cout << x << '\t';
            count = i;
        }
    }
    std::cout << "Number of steps, " << count << ". Max is, " << max;
}