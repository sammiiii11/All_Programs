#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "Result: Even" << endl;
    else
        cout << "Result: Odd" << endl;

    return 0;
}
