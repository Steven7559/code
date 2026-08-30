#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 5;
int n, k, t[N], a[N], b[N], s[N];
vector< int > dis;
int lb(int x) {
    return x & (-x);
}
void add(int id, int num) {
    while (id <= n + 1) {
        t[id] += num;
        id += lb(id);
    }
}
int query(int id) {
    int res = 0;
    while (id) {
        res += t[id];
        id -= lb(id);
    }
    return res;
}
signed main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i] - k;
    }
    s[0] = 0;
    dis.push_back(s[0]);
    for (int i = 1; i <= n; i++) {
        s[i] = s[i - 1] + b[i];
        dis.push_back(s[i]);
    }
    sort(dis.begin(), dis.end());
    dis.erase(unique(dis.begin(), dis.end()), dis.end());
    int m = dis.size();
    int ans = 0;
    int pos0 = lower_bound(dis.begin(), dis.end(), s[0]) - dis.begin() + 1;
    add(pos0, 1);
    for (int i = 1; i <= n; i++) {
        int pos = lower_bound(dis.begin(), dis.end(), s[i]) - dis.begin() + 1;
        ans += query(pos);
        add(pos, 1);
    }
    cout << ans << endl;
    return 0;
}