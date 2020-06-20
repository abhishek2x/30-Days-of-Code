/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    for (int i = 2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);


    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if(isPrime(n)) {
            cout << "Prime" << endl;
        }
        else cout << "Not prime" << endl;
    }

    return 0;
}