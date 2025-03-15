#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    int t  = 0;
    for(int i = 0; i < n; i++) {
        if(i + 1 == k) {
            t = v[i];
            break;
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] >= t && v[i] > 0) cnt += 1;
    }

    cout << cnt << endl;
    return 0;
}