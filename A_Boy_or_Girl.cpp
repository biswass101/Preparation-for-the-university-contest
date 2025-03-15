#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x; cin >> x;
    map<char, int> mp;
    for(char ch : x) mp[ch]++;

    if(mp.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}