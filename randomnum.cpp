#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL)); // initialize random seed
    int num = rand() % 201 - 100; // generate random number in range [-100, 100]
    cout << "Random number: " << num << endl;
    if (num > 0) {
        cout << num << " is positive." << endl;
    }
    else if (num < 0) {
        cout << num << " is negative." << endl;
    }
    else {
        cout << num << " is zero." << endl;
    }
    return 0;
}
