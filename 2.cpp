#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i2;
    double d2;
    string s2;

    cin >> i2 >> d2;
    getline(cin >> ws, s2);
    

    cout << i2 + i << endl;
    cout << fixed << setprecision(2) << (d + d2) << endl;
    // cout << d + d2 << endl;
    cout << s + s2; 
    
    return 0;
}