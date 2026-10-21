#include <iostream>

int main()
{
   int n, total{0}, nth{1};
   std::cin >> n;
   for (int i2 {0}; i2 < n; i2++ )
   {
      for (int i {0}; i < n; i++)
      {
       total = total + nth;
       std::cout << total << "\t";
      }
      std::cout << '\n';
      nth = nth + 1;
      total = 0;
}
return 0;
}