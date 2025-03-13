#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int b = 0;
    for(int i = 0; i < 31; i++) {
        int bit = n & (1 << i);
        if(bit != 0) b++;
    }

    cout << b << endl;
    return 0;
}