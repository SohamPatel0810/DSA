#include<bits/stdc++.h>

void returnNoofDogits(n){
    return (int)(log10(n) + 1);
}
int main (){
    int a = returnNoofDigits(7889);
    cout << a;
    return 0;
}

// TC -> O(log10(N))

// ANOTHER METHOD

void returnNoofDogits(n){
    int count = 0;
    while(n>0){
        n = n % 10;
        count = count + 1;
        n = n/10;
    }
    return count
}