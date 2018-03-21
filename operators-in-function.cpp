#include <iostream>
#include <cmath>
using namespace std;

/* simple function to sum the a and b integers */
int myFunction(int a, int b) {
  return a + b;
}

/* simple function type string to check if bool is true or false */
string comparation(int a) {
  if(a) {
  return "yes";
  }
  return "no";
}

int main() {

string simpleString = "Hello";
bool simpleBoolean = false;
char simpleChar = '%'; // Remember! It compiles only under simple ''



/* Here we output our exercises */
cout << "Returning 2+3 = " << myFunction(2,3) << endl;
cout << "Returning (2+3)+3 = " << myFunction((2+3), 3) << endl;
cout << "Returning pow((2+3*5),2) + 3 = " << myFunction(pow((2+3*5),3), 3) << endl;
cout << "Returning sqrt(1000) + 3 = " << myFunction(sqrt(1000), 3) << endl;
//cout << "Returning a variable type string should give error = " << myFunction(simpleString, 3) << endl;
cout << "Returning boolean type variable + 3 <=> bool == 0: " << myFunction(simpleBoolean, 3) << endl;
cout << "Outputting a simple char type variable: " << simpleChar << endl;
cout << "Checking if a bool variable is true or false: " << comparation(simpleBoolean) << endl;
}


/* Table of contents:
a) We tested firstly the nesting of functions in the declaration. For sample, knowing that we have
a function with 2 variables, when we declared myFunction(a,b) within the main, we inserted different
functions for variable 'a' as well

b) Trying to calculate a variable type bool with an integer, it resulted that the boolean was considered
0 for false and 1 for true; the script calculated 0+3 = 3

c) We declared a variable type char (single 1 byte character). The program compiles only when the content
of the variable is declared within simple ' and not double ".

d) We made a simple function type string to check whether our bool variable is true or false and output an string.
Bool returns an integer (0 or 1). So using within the function the variable type int or bool will output correctly the result.
*/

