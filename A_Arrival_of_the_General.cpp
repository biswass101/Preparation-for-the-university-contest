#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int x = 0, y = n - 1;
    int min = v[0];
    int max = v[0];
    for (int i = 0, j = n - 1; i < n - 1, j >= 0; i++, j--)
    {
        if (min >= v[i])
        {
            min = v[i];
            x = i;
        }
        if (max <= v[j])
        {
            max = v[j];
            y = j;
        }
    }

    if (y < x)
        cout << (y - 0) + (n - 1 - x) << endl;
    else
        cout << ((y - 0) + (n - 1 - x)) - 1 << endl;

    return 0;
}