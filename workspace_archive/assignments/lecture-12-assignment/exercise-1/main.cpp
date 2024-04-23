#include <iostream>
using namespace std;

int main() {
	
    int price;
    bool member;
	cin >> price >> member;

    if(price >= 1000){
        cout << "Free shipping" << endl;
    }

    if (price < 1000){
        if(member){
            cout << "Discounted shipping" << endl;
        } 
        else{
            cout << "Full price shipping" << endl;
        }
    }

    return 0;
}