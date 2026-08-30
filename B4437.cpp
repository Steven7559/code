#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int a, b;
signed main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    cout << min(a / 3, b / 2);
    return 0;
}