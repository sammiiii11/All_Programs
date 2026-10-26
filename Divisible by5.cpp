#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number % 5 == 0)
        cout << "Result: Divisible by 5" << endl;
    else
        cout << "Result: Not divisible by 5" << endl;

    return 0;
}
