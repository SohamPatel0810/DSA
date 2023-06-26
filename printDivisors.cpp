//TC O(N)

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    for(int i = 1 ; i <= n ; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}

//ANOTHER METHOD
void printDivisors(int n){
    vector<int> ls;
    // O(sqrt(n))
    for(int i = 1 ; i <= (i * i <= n) ; i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back((n/i));
            }
        }
    }
    // O(nlogn) n = factors
    sort(ls.begin(),ls.end());
    // O(n) n = factors
    for(auto it : ls) cout << it << " ";
}