// 【Luogu】 B4483 [CSP-X 2025 河南] 投票 / vote （URL:
// https://www.luogu.com.cn/problem/B4483）

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 5;
int n, k, ans;
vector< int > v;
bool cmp(int x, int y) {
    return x > y;
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), cmp);
    k = v[0];
    for (auto u : v) {
        if (u != k) {
            cout << u;
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
