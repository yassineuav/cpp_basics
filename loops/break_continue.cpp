#include <iostream>

using namespace std;

int main(){
  
    for(int i = 0; i <= 5; i++){

        if(i == 5){
            break;
        }
        
        if(i == 2){
            continue;
        }
        cout << i;
    }
    
    return 0;
}
