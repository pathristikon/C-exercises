/* error-> not reading the entire string name from cin. Error from cin!!! */
#include <iostream>
#include <fstream>
using namespace std;
string file = "texting.txt";

bool writing(string text){
ofstream fileToWrite;
fileToWrite.open(file);
fileToWrite << text;
fileToWrite.close();
}


int main() {
string toInsert;

cout << "Here we create a file and write. Type what to write: " << endl;
cin >> toInsert;
cout << "You wrote: " << toInsert;
writing(toInsert);
cout << endl << "Thank you! Check the " << file << " to see what you wrote" << endl;
}
