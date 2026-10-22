#include <iostream>
using namespace std;

int main() {
    double first, second;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;

    if (first > second) {
        cout << "Result: " << first << " is greater\n";
    } else if (second > first) {
        cout << "Result: " << second << " is greater\n";
    } else {
        cout << "Result: Both numbers are equal\n";
    }

    return 0;
}