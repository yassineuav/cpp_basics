#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int b = 3;
    double result = static_cast<double>(a) / b;
    cout << "result = " << result << endl;
    return 0;
}
