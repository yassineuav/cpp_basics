#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int rows = 0;
    cout << "enter number of rows: ";
    cin >> rows;

    for(int i =0; i <= rows; i++){
        for(int j = i; j <= rows; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
