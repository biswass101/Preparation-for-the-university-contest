#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        pair<int, int> hb;
        if (n % 2 == 0)
            hb.first = n / 2;
        else
            hb.first = n / 2 + 1;

        if (m % 2 == 0)
            hb.second = m / 2;
        else
            hb.second = m / 2 + 1;

        if (i <= hb.first && j <= hb.second)
        {
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        }
        else if (i <= hb.first && j >= hb.second)
        {
            cout << 1 << " " << m << " " << n << " " << 1 << endl;
        }
        else if (i >= hb.first && j <= hb.second)
        {
            cout << n << " " << 1 << " " << 1 << " " << m << endl;
        }
        else
            cout << n << " " << m << " " << 1 << " " << 1 << endl;
    }
    return 0;
}