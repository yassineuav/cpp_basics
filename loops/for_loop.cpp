#include <iostream>

using namespace std;

int main(){

    // factorial
    cout << "Enter a postive number: ";
    int number = 0;
    cin >> number;

    if(number < 0){
        cout << "Error! number must be positive";
    }else{
        int factorial = 1;
        for(int i = number; i >= 1; i--){
            factorial *= i;
        }
        cout << "factorial of " << number << " is " << factorial << endl;
    }


    return 0;
}
