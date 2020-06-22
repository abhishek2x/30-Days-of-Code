/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<pair<string, string>> ps;

    string s1, s2;
    // pair<string, string> detail;

    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        ps.push_back(make_pair(s1, s2));
    }
    
    sort(ps.begin(), ps.end());

    for (int i = 0; i < n; i++)
    {
        int adrt = ps[i].second.find('@');  // adrt == @
        if(ps[i].second.substr(adrt+1) == "gmail.com")
        cout << ps[i].first << endl;
    }

    return 0;
}