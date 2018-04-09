#include <iostream>
using namespace std;

int square(int base, int exponent) {
   int total = 1;
   for(int i; i < exponent; i++){
	total = base * total;
   }
   return total;
}

int radical(int number) {
   int j = 0;
   for(int i = 0; i < number; i++) {
      int raised2Power = 0;
      if((i * i) == number) {
        j = i;
      }
   }
   return j;
}

int main() {
  int a,b,c,delta,x1,x2;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << endl<< "Enter the value of b: ";
  cin >> b;
  cout << endl << "Enter the value of c: ";
  cin >> c;

  delta=square(b,2)-(4*a*c);
    if(delta > 0){
      cout << "Delta is " << delta << endl;
      x1 = (-b + radical(delta))/2*a;
      x2 = (-b - radical(delta))/2*a;

      cout << "X1 is " << x1 << " and X2 is " << x2 << endl;
    }
    else {
      cout << "Delta is " << delta << ". Can't accept negative value" << endl;
    }
}

