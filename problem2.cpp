#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Result: Even\n";
    } else {
        cout << "Result: Odd\n";
    }

    return 0;
}