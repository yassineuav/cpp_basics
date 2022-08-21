#include <iostream>

using namespace std;

int main(){

    int numbers[] = {0,1,2,3,4,5,6,7};
    for (int i=0; i < sizeof(numbers)/sizeof(int); i++){
        cout << numbers[i] << " ";
    }

    cout << endl;

    for(int number: numbers){
        cout << number << " ";
    }

    cout << endl;

    string name = "Yassine";
    for(char ch: name){
        cout << "'" << ch << "' ,";
    }

    cout << endl;

    int tempratures[] = {60,12,23,32,41,15,16};
    double sum = 0;
    short count = sizeof(tempratures)/sizeof(int);
    for(int temprature: tempratures)
        sum += temprature;
    
    double average = sum / count;
    cout << average;
 
    return 0;
}
