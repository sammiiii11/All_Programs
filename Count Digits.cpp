#include <iostream>
using namespace std;
int main() {
 int n, digits = 0;
 cout << "Enter a number: ";
 cin >> n;
 if (n == 0) {
 digits = 1;
 } else {
 if (n < 0) {
 n = -n;
 }
 while (n > 0) {
 digits++;
 n /= 10;
 }
 }
 cout << "Digits = " << digits << endl;
 return 0;
}
