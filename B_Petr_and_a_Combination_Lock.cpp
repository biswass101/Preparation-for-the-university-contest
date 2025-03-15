#include<bits/stdc++.h>
using namespace std;
bool getRes(int i, int n, vector<int>&v, int sum) {
    if(i >= n) return false;
    if(i == n - 1) {
        if(sum == 0 || sum == 360) return true;
        else return false;
    }
    bool l = getRes(i + 1, n, v, sum + v[i + 1]);
    bool r = getRes(i + 1, n, v, sum - v[i + 1]);

    return l || r;
}
int main()
{
    int n; cin >> n;
    vector<int> v(n); for(int &x : v ) cin >> x;
    bool res = getRes(0, n, v, v[0]);
    cout << (res ? "YES" : "NO");
    return 0;
}