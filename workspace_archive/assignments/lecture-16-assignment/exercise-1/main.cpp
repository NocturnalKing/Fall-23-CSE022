#include <iostream>
using namespace std;

int main() {
    
    string password;
    getline(cin, password);
    for(int i = 0; i < password.length(); i++){
        char lett = password[i];
        // lett = tolower(password[i]);
        if(lett == 'a'){
            lett = '@';
        } else if(lett == 'c'){
            lett = '(';
        } else if(lett == 'g'){
            lett = '9';
        } else if(lett == 'o'){
            lett = '0';
        } else if(lett == 's'){
            lett = '$';
        }
        password[i] = lett;
    }
    cout << password << endl;
    return 0;
}