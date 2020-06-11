/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int p;

    try{
        p = stoi(s);
        cout << p;
    }
    catch(exception e){
        cout << "Bad String";
    }

    return 0;
}