// 【Luogu】 P6320 [COCI 2006/2007 #4] SIBICE URL:
// https://www.luogu.com.cn/problem/P6320

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 5;
int n, w, h, a;
bool f(int x) {
    return x * x <= w * w + h * h;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> w >> h;
    while (n--) {
        cin >> a;
        if (f(a))
            cout << "DA\n";
        else
            cout << "NE\n";
    }
    return 0;
}
