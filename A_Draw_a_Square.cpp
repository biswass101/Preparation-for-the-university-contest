#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        double r1 = sqrt(pow(l,2) + pow(u, 2));
        double r2 = sqrt(pow(u,2) + pow(r, 2));
        double r3 = sqrt(pow(r,2) + pow(d, 2));
        double r4 = sqrt(pow(d,2) + pow(l, 2));
        double d1 = -l-r; 
        double d2 = -d-u;

        if(r1 == r2 && r2 == r3 && r3 == r4 && d1 == d2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}