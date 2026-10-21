#include <iostream>
#include <string>
 
int main(){
    std::string x;
    std::cin >> x;
bool po_op = true;
    if (x == ("Stop"))
{
    po_op = false;
}

    while (po_op)
{
    std::cout << x << '\n';
    std::cin >> x;
    if ((x == "Stop") || (x == "STOP") || (x == "stop"))
{
    po_op = false;
}

}
}