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

    vector<int> v;
    int k;
    
    for (int i = 0; i < n; i++){
        cin >> k;
        v.push_back(k);
    }

    int numSwaps = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(v[j] > v[j+1]){
                swap(v[j], v[j + 1]);
                numSwaps++;
            }
        }
    }
    cout << "Array is sorted in "<<numSwaps << " swaps." << endl;
    cout << "First Element: " <<  v[0] << endl;
    cout << "Last Element: " << v[n-1] << endl;
    return 0;
}