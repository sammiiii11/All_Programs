#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Enter number: ";
    cin >> number;

    if (number >= 0)
        cout << "Result: Positive" << endl;
    else
        cout << "Result: Negative" << endl;

    return 0;
}
