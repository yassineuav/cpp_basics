#include <iostream>

using namespace std;

int main(){
   string names[3];
   
   cout << "Name: ";
   getLine(cin, names[0]);
   
   cout << "Name: ";
   getLine(cin, names[1]);
   
   cout << "Name: ";
   getLine(cin, names[2]);
   
   cout << "your name : "<< names[0] << endl;

    return 0;
}
