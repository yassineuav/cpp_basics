#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    const short minValue = 1;
    const short maxValue = 6;

    srand(time(nullptr));
    int first = (rand() % (maxValue - minValue + 1)) + minValue;
    int second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << first << ", " << second << endl;

    return 0;
}
