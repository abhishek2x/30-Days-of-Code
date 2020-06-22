/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){

        ll n;
        ll k;
        cin >> n >> k;

        vector<int> v;
        for (ll i = 1; i <= n; i++)
            v.push_back(i);

        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = i+1; j < n; j++)
            {
                ll num = v[i]&v[j];
                if(num < k)
                {
                    sum = max(num, sum);
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}