// Sample Input

// 3
// sam 99912222
// tom 11122222
// harry 12299933
// sam
// edward
// harry

// Sample Output

// sam=99912222
// Not found
// harry=12299933

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    long int n;
    cin >> n;

    map<string, string> detail;

    for (long int i = 0; i < n; i++)
    {
        string s; cin >> s;
        string num; cin >> num;
        detail[s] = num;
    }
        
    string str;
        
    while(cin >> str)
    {
        auto it = detail.find(str);
        if(it == detail.end())
            cout << "Not found\n";
        else cout << str << "=" << detail[str] << endl;
    }
    

    return 0;
}