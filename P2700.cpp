#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e7 + 1;
struct edge {
    int x, y, z;
} a[N];
int f[N], ans, n, k;
bool l[N];
bool cmp(edge a, edge b) {
    return a.z > b.z;
}
int find(int x) {
    return (x == f[x]) ? x : find(f[x]);
}
signed main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    for (int x, i = 1; i <= k; i++)
        cin >> x, l[x] = 1;
    for (int i = 1; i < n; i++)
        cin >> a[i].x >> a[i].y >> a[i].z, ans += a[i].z;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i < n; i++) {
        int x = find(a[i].x), y = find(a[i].y);
        if (l[x] && l[y])
            continue;
        f[x] = y;
        ans -= a[i].z;
        l[x] = l[y] = l[x] | l[y];
    }
    cout << ans;
    return 0;
}