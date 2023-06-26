#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    int reverse = 0;
    while(n>0){
        int lastDigit = n % 10;
        reverse = (reverse * 10) + lastDigit;
        n = n / 10;
    }
    return reverse;
}

int main() {
    int a = reverseNumber(789900);
    cout << a;
    return 0;
}