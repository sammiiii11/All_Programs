#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    return 0;
}
