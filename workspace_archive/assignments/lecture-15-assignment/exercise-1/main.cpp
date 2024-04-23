#include <iostream>
using namespace std;

int main() {
    // Create a program that reads in an arbitrary number of grades and computes their average

    float total, count, num, average;
    total = 0;
    count = 0;

    while(cin >> num){
        total += num;
        count++;
    }

    average = total/count;
    cout << average <<endl;

    return 0;
}