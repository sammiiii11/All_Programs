#include <iostream>
using namespace std;

int main() {
    double speed;
    cout << "Enter speed (km/h): ";
    cin >> speed;

    if (speed > 60)
        cout << "Over the speed limit" << endl;
    else
        cout << "Safe speed" << endl;

    return 0;
}
