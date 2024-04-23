#include <iostream>
#include <ucm_random>

using namespace std;

int main() {
    int n,low, high;
    cin >> n >> low >> high;
    RNG generator;
    for(int i = 0; i < n; i++){
        int x = generator.get(low, high);
        cout << x <<endl;
    }

	return 0;
}