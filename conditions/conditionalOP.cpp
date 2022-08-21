#include <iostream>

using namespace std;

int main(){
    int sales = 10'000;
    double commission = (sales > 10'000) ? .1 : .5;
    cout << commission << endl;

    bool data_verified = true;
    cout << "Data verified: ";
    if(data_verified){
        cout << boolalpha << data_verified << endl;
    }else {
        cout << boolalpha << data_verified << endl;
    }

    return 0;
}
