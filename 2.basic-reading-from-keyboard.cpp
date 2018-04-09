#include <iostream>
using namespace std;

/*
Defining the function & the variables type int.
It is possible to call a function inside of the function itself (see the example Reading(); inside.
*/

int input;

int Reading(){
  cout << "Write your number: " << endl;
  cin >> input;
  while(input != 0){
  Reading();
  }
}

int main() {
  Reading();
}
