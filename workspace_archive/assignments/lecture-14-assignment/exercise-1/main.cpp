#include <iostream>
using namespace std;

int main() {

    int num, min, i;
    min = 10000000;
    for(i = 0; i < 5; i++){
        cin >> num;
        if(min > num){
            min = num;
        }
    }

    cout << "The min is: " << min << endl;
    
    return 0;
    return 0;
}