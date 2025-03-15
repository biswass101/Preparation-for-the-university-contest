#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>> t;
    while(t--) {
        string x; cin >> x;
        if(x.size() > 10) {
            string res = x[0] + to_string(x.size() - 2) + x[x.size() - 1];
            cout << res << endl;
        } else cout << x << endl;
    }
    return 0;
}