#include <iostream>
#include <ucm_random>
using namespace std;


int main() {

    RNG generator;

    int lhs = generator.get(1, 20);
    int rhs = generator.get(1, 20);
    int opCode = generator.get(1, 4);

    if (lhs < rhs) {
        int temp = lhs;
        lhs = rhs;
        rhs = temp;
    }

    string op;
    int answer;
    if (opCode == 1) {
        op = "+";
        answer = lhs + rhs;
    }
    if (opCode == 2) {
        op = "-";
        answer = lhs - rhs;
    }
    if (opCode == 3) {
        op = "*";
        answer = lhs * rhs;
    }
    if (opCode == 4) {
        op = "/";
        answer = lhs / rhs;

    }

    cout << lhs << " " << op << " " << rhs << " = ";

    int input;
    cin >> input;

    if(input == answer){
        cout << "That is the correct answer!" << endl;
    } else {
    cout << "That's incorrect. " << lhs << " " << op << " " << rhs << " = " << answer << endl;
    }
    return 0;
}