#include <iostream>
using namespace std;

int main() {
    double marks[5], total = 0, percentage;

    cout << "Enter marks of five subjects (each out of 100):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total = total + marks[i];
    }

    percentage = total / 5.0;

    cout << "Total marks = " << total << " out of 500" << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
