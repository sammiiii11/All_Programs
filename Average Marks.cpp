#include <iostream>
using namespace std;
int main() {
 int mark, count = 0, sum = 0;
 cout << "Enter marks (-1 to finish): ";
 while (true) {
 cin >> mark;
 if (mark == -1) {
 break;
 }
 sum += mark;
 count++;
 }
 if (count > 0) {
 double average = static_cast<double>(sum) / count;
 cout << "Average = " << average << endl;
 } else {
 cout << "No marks were entered." << endl;
 }
 return 0;
}

