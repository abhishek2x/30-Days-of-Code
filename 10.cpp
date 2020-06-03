/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

/*
int convertToBinary(ll n){
    
    int binaryNum[32]; 
    int i = 0; 

    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 

    int t = pow(10, i-1);
    int ans = 0;

    for (int j = i - 1; j >= 0; j--){ 
        // cout << binaryNum[j];
        ans += binaryNum[j]*t;
        t /= 10;
    }
    return ans;
}
*/

int Ones(int k){

    int ans = 0;
    while(k != 0){
        
        k = k&(k<<1);
        ans++;
    }
    return ans;
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    
    cout << Ones(n); 
    return 0;
}