#include <iostream>

int main()
{
   int n, i{0}, i2{0};
   std::cin >> n;
   while (i2 < n)
   {
      while (i < n)
      {
        std::cout <<n ;
        i = i + 1;
      }
      std::cout << '\n';
      i2 = i2 + 1;
      i = 0;
}
return 0;
}