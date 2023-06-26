#include <bits/stdc++.h>
using namespace std;

int palindrome(int n){
    int reverse = 0;
    int temp = n;
    while(n>0){
        int lastDigit = n % 10;
        reverse = (reverse * 10) + lastDigit;
        n = n / 10;
    }
    if(temp == reverse){
        return true;
    }
    return false;
}

int main() {
    int a = palindrome(1221);
    cout << a;
    return 0;
}