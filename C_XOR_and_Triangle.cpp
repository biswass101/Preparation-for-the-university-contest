#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin >> x;
    // finding set bit in x
    for (int i = 0; i < 31; i++)
    {
        int y = 0;
        int bit = (1 << i) & (x);
        if (bit != 0) // bit is set
        {
            y = y | (1 << i);            // bit setted in y
            for (int j = 0; j < 31; j++) // looking for unset bit
            {
                int bit = (1 << j)  & (x);
                if (bit == 0) // unset bit is found
                {
                    y = y | (1 << j); // bit setted
                    if (y < x)
                    {
                        cout << y << endl;
                        return;
                    }
                }
            }
        }
    }

    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}