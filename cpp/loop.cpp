#include <iostream>

int main()
{
  int j = 0;
  std::string name[6] = {};

  while (j <= 5)
  {
     std::cin >> name[j];
     j++;
  }
  int kj = 0;
  
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  while (kj <= 5)
      std::cout << name[kj++] << std::endl;
  return 0;
}
 