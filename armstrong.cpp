#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int num, temp, lastDigit, n = 0, result = 0, power;
   cout << "Enter an integer: ";
   cin >> num;

   temp = num;

   while (temp != 0) {
      temp /= 10;
      ++n;
   }
   temp = num;

   while (temp != 0) {
      lastDigit = temp % 10;
      // pow() returns a double value
      // round() returns the equivalent int
      power = round(pow(lastDigit, n));
      result += power;
      temp /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
   return 0;
}