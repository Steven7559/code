#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int a[N], n, ans;
vector< int > v[N];
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        v[a[i]].push_back(i);
    }
    for (int t = 1; t <= 1e6; t++) {
        if (v[t + 1].empty() or v[t].empty()) {
            continue;
        }
        for (int i = v[t].size() - 1; i >= 0; i--) {
            if (v[t + 1].empty()) {
                break;
            }
            int p = v[t + 1].size() - 1;
            if (v[t + 1][p] > v[t][i]) {
                ans++;
                v[t][i] = 0;
                v[t + 1].pop_back();
            }
        }
    }
    cout << ans;
    return 0;
}
