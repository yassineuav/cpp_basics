#include <iostream>

using namespace std;

int main(){

    short first = 0, second = 2;
    cout << "Enter an operator: ";

    char op;
    cin >> op;

    switch(op){
        case '+':
            cout << first + second;
            break;
        case '-':
            cout << first - second;
            break;
        default:
            cout << "Invalid operator!"<< endl;
            
    }

    return 0;
}
