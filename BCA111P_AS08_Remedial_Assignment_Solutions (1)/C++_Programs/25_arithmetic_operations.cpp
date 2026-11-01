// Q25. Arithmetic operations on two numbers
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;

    if (b != 0)
        cout << "Quotient = " << a / b << endl;
    else
        cout << "Quotient cannot be calculated because the second number is zero." << endl;

    return 0;
}
