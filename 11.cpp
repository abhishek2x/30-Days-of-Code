/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    const int D = 6;
    int a[6][6];

    for (int i = 0; i < D; i++){
        for (int j = 0; j < 6; j++){
            cin >> a[i][j];
        }
    }
    
    int sum=INT_MIN;

    for (int i = 0; i < D-2; i++)
    {
        for (int j = 1; j < D-1; j++)
        {
            sum = max(sum, (a[i][j-1] + a[i][j] + a[i][j+1] + a[i+1][j] + a[i+2][j-1] + a[i+2][j] + a[i+2][j+1]));
            // cout << sum << endl;
        }
    }
    
    cout << sum;
    return 0;
}