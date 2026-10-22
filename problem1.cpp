#include <iostream>
using namespace std;

int main() {
    double marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Result: Pass\n";
    } else {
        cout << "Result: Fail\n";
    }

    return 0;
}
