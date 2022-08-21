#include <iostream>
#include <iomanip>
#include <limits>       // std::numeric_limits

using namespace std;

int main(){
    cout << left << setw(10) << "hello" << right << setw(10) <<"test" << endl;

    cout << numeric_limits<int>::max() << endl
         << numeric_limits<int>::min() << endl;

    bool isNewUser = false;
    cout << boolalpha << isNewUser << endl;
    cout << "--------------------------" << endl;

    // char
    char ch = 'a';
    cout << ch << " = " << +ch;
    // string 
    string name;
    cout << "Enter your name: ";
    getLine(cin, name);
    cout << "Hi " << name << endl;
    
    return 0;
}
