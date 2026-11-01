#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else if (n > 20) {
        cout << "Please enter a number from 0 to 20 for this program." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        cout << "Factorial = " << factorial << endl;
    }

    return 0;
}
