#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long int> a(n);
        for(long long int &x: a) cin >> x;
        sort(a.begin(), a.end());
        int i = a.size() - 2;
        int j = a.size() - 1;

        if(a.size() == 1) cout << a[0] << endl;
        else {
            while(i >=0) {
                long long int add = a[i] + a[j];
                a[i] = add - 1;
                i--;
                j--;
            }
            // for(int x : a) cout << x << " ";
            cout << a[0] << endl;
        }
    }
    return 0;
}