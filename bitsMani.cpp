#include<bits/stdc++.h>
using namespace std;
vector<int> getBinNumber(int num) {
    vector<int> binary;
    while(num > 0) {
        int rem = num % 2;
        binary.push_back(rem);
        num/=2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}
void showBin(vector<int>& v) {
    for(auto &x : v) cout << x;
    cout << endl;
}
int setBit(int n, int msk) {
    return n | (1 << msk);
}
bool isEven(int n) {
    return !(n & 1);
}
bool isDivByPow2(int n, int k) {
    int pow2 = 1 << k;
    return (n & (pow2 - 1)) == 0;
}
bool isPowOf2(int n ) {
    return n && !(n & (n - 1));
}
int main()
{
    cout << isPowOf2(12) << endl;
    return 0;
}