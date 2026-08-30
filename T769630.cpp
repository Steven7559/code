#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5;
int n, a[N], minn = INT_MAX, maxp = INT_MIN, maxn = INT_MIN;
vector< int > pos[N];
bool f = 1;
ll ans = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]].push_back(i);
        maxn = max(maxn, a[i]);
    }
    for (int x = 0; x <= maxn; x++) {
        if (f && !pos[x].empty()) {
            if (x == 0) {
                int l = 0;
                for (int p : pos[x]) {
                    ll len = p - l - 1;
                    ans += len * (len + 1) / 2;
                    l = p;
                }
                ll len = n - l;
                ans += len * (len + 1) / 2;
            } else {
                int la = 0;
                for (int p : pos[x]) {
                    int le = la + 1;
                    int r = p - 1;
                    if (le <= minn && r >= maxp) {
                        ans += 1LL * (minn - le + 1) * (r - maxp + 1);
                    }
                    la = p;
                }

                int l = la + 1;
                int r = n;
                if (l <= minn && r >= maxp) {
                    ans += 1LL * (minn - l + 1) * (r - maxp + 1);
                }
            }
        }
        if (pos[x].empty()) {
            f = 0;
        } else {
            minn = min(minn, pos[x][0]);
            maxp = max(maxp, pos[x].back());
        }
    }
    cout << ans;
    return 0;
}