#include <iostream>

int
main(int agc, string* argv[])
{

  std::string name; // for storing user name.

  std::cin >> name; // getting user name.

  std::cout << "Hello, World from " + name + "!\n"; // output.

  return 0;

}
