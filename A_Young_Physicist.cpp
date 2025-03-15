#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int forces[n][3];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++) cin >> forces[i][j];
    }
    bool isOk = true;
    for(int j = 0; j < 3; j++) {
        int getSum = 0;
        for(int i = 0; i < n; i++) {
            getSum += forces[i][j];
        }
        if(getSum != 0) {
            isOk = false;
            break;
        }
    }

    cout << (isOk ? "YES" : "NO") << endl;
    return 0;
}