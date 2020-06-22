/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if(y2 > y1)
    {
        cout << 0;
    }
    else if(y2 == y1 && m2 > m1)
    {
        cout << 0;
    }
    else if(y2 == y1 && m2 == m1 && d2 > d1)
    {
        cout << 0;
    }
    else if (m1 == m2 && y1 == y2 && d1 != d2)
    {
        cout << 15*(d1-d2);
    }
    else if(m1 != m2 && y1 == y2)
    {
        cout << 500*(m1-m2);
    }
    else if(y1 != y2){
        cout << 10000;
    }
    return 0;
}