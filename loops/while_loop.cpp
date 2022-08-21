#include <iostream>

using namespace std;

int main(){

    for(int i = 1; i <= 5; i++){
        cout << i ;
    }

    cout << endl;
    
    int i = 1;
    while(i <= 5){
        cout << i;
        i++;
    }

    cout << endl;

    int number = 0;

    while(number < 1 || number > 5){
        cout << "Number: ";
        cin >> number;
        if(number < 1 || number > 5){
            cout << "Enter a number between 1 and 5! " << endl;
        }
    }

    cout << endl;

    int n =0;
    do {
        cout << "Enter a number: ";
        cin >> n;
    }while(n != 0);

    



    return 0;
}
