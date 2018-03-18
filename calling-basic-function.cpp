#include <iostream>
#include <cmath>
using namespace std;

int RaisingToPower(int base, int exponent) {
  return pow(base, exponent);
}

int main() {

/* C++ function for raising to power (eg. 2^3) is pow.
To have access to pow function, you need to include the cmath library.
This exercise describes how to write a separate function and call it within the main program. */

  int fromMain = pow(2, 3);
  int fromFunction = RaisingToPower(2, 3);
  cout << "Raising to power from main(): " << fromMain << endl;
  cout << "Raising to power from function: " << fromFunction << endl;

  return 0;
}
