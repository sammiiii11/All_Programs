#include <iostream>
using namespace std;
int main() {
 int n;
 long long factorial = 1;
 cout << "Enter a non-negative integer: ";
 cin >> n;
 if (n < 0) {
 cout << "Factorial is not defined for negative integers." << endl;
 } else {
 for (int i = 1; i <= n; i++) {
 factorial *= i;
 }
 cout << n << "! = " << factorial << endl;
 }
 return 0;
}

