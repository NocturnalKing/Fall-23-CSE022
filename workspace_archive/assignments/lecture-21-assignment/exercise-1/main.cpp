#include <iostream>
#include <ucm_random>
using namespace std;

void printBorder(int size) {
    for (int i = 0; i < size; i++) {
        cout << ".-------.";
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void printTop(int dice[], int size) {
    for (int i = 0; i < size; i++) {
        if (dice[i] == 1) {
            cout << "|       |";
        } else if (dice[i] == 2 || dice[i] == 3) {
            cout << "| *     |";
        } else {
            cout << "| *   * |";
        }
        
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void printMiddle(int dice[], int size) {
    for (int i = 0; i < size; i++) {
        if (dice[i] == 1 || dice[i] == 3 || dice[i] == 5) {
            cout << "|   *   |";
        } else if (dice[i] == 2 || dice[i] == 4) {
            cout << "|       |";
        } else {
            cout << "| *   * |";
        }

        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void printBottom(int dice[], int size) {
    for (int i = 0; i < size; i++) {
        if (dice[i] == 1) {
            cout << "|       |";
        } else if (dice[i] == 2 || dice[i] == 3) {
            cout << "|     * |";
        } else {
            cout << "| *   * |";
        }
        
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void printDice(int dice[], int size) {
    printBorder(size);
    printTop(dice, size);
    printMiddle(dice, size);
    printBottom(dice, size);
    printBorder(size);
}

bool allSame(int dice[], int size) {
    int first = dice[0];

    for (int i = 1; i < size; i++) {
        if (first != dice[i]) {
            return false;
        }
    }

    return true;
}

int main(){
    const int size = 2;
    int hand[size];
    int score = 0;
    
    RNG rng;

    while (true) {
        system("clear");

        // generating random numbers for dice
        for (int i = 0; i < size; i++) {
            int number = rng.get(1, 6);
            hand[i] = number;
            score += number;
        }

        printDice(hand, size);

        cout << "Current Score: " << score << endl << endl;

        if (allSame(hand, size)) {
            score = 0;
            break;
        }

        

        cout << "Continue ([Y]/N): ";
        string c;
        getline(cin, c);

        if (toupper(c[0]) == 'N') {
            break;
        }
    }

    cout << endl << "Your score: " << score << endl;

 

    return 0;
}