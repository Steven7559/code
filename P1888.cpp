// Problem: P1888 三角函数
// URL: https://www.luogu.com.cn/problem/P1888
// Memory Limit: 125 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
int a, b, c, maxn, minn;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> a >> b >> c;
    maxn = max({a, b, c});
    minn = min({a, b, c});
    int g = __gcd(maxn, minn);
    maxn /= g;
    minn /= g;
    cout << minn;
    cout << '/';
    cout << maxn;
    return 0;
}
