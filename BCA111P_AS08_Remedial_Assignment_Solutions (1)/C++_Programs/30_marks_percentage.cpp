// Q30. Total and percentage of five subjects (each out of 100)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double marks[5], total = 0;

    cout << "Enter marks for five subjects (each out of 100):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double percentage = (total / 500.0) * 100.0;

    cout << fixed << setprecision(2);
    cout << "Total marks = " << total << " / 500" << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
