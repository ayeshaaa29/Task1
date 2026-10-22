#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Enter number: ";
    cin >> number;

    if (number >= 0) {
        cout << "Result: Positive\n";
    } else {
        cout << "Result: Negative\n";
    }

    return 0;
}