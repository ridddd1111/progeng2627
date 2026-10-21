#include <iostream>
#include <string>

int main() 
{
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    const double mult{1.8};
    bool po_op = true;
    std::cin >> temp_in >> unit_in;
    if ((unit_in == "c") || (unit_in == "C"))
    {
        temp_out = temp_in * mult + 32;
        unit_out = "F";
    }
    else if ((unit_in == "f") || (unit_in == "F"))
        {
            unit_out = "C";
        temp_out = (temp_in - 32)/mult;
        }
        else {
        po_op = false;

    }
     if(po_op){
        std::cout << temp_out << " " << unit_out << '\n';
    }
    else{
        std::cout << "error, unit not recognised" << '\n';
    }
}