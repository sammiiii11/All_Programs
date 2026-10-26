#include <iostream>
using namespace std;

int main() {
    double temperature;
    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature > 30)
        cout << "Result: Hot" << endl;
    else
        cout << "Result: Cold" << endl;

    return 0;
}
