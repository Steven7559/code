#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    int h = x / 60, m = x % 60;
    cout << "|" << h / 10 << "|" << h % 10 << "|:|" << m / 10 << "|" << m % 10
         << "|";
    return 0;
}