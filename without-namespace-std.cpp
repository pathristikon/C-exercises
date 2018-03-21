#include <iostream>
#include <cmath>

/* Simple example for using std without declaring previously */
int main() {
  int a;

  std::cout << "Hello. Type a number ";
  std::cin >> a;
  std::cout << std::endl;
  std::cout << "You typed " << a << std::endl;
  std::cout << "Your number raised to power 3 is " << pow(a,3) << std::endl;
}
