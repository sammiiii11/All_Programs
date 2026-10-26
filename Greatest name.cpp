#include <iostream>
using namespace std;

int main() {
    double first, second;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;

    if (first > second)
        cout << "Result: " << first << " is greater." << endl;
    else if (second > first)
        cout << "Result: " << second << " is greater." << endl;
    else
        cout << "Result: Both numbers are equal" << endl;

    return 0;
}
