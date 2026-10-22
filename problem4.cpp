#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Result: Eligible to vote\n";
    } else {
        cout << "Result: Not eligible to vote\n";
    }

    return 0;
}