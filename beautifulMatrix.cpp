#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5];
    for(int i = 0; i < 5; i ++) {
        for(int j = 0; j < 5; j++) {
            cin >> mat[i][j];
        }
    }
    int a = 0, b = 0;
    for(int i = 0; i < 5; i ++) {
        for(int j = 0; j < 5; j++) {
            if(mat[i][j] == 1) {
                a = i, b = j;
                int res = abs(2 - a) + abs(2 - b);
                cout << res << endl;
                break;
            }
        }
    }
    return 0;
}