#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n, t[N], a[N], f[N], ans;
int lb(int x) {
    return x & (-x);
}
void add(int id, int num) {
    while (id <= n) {
        t[id] += num;
        id += lb(id);
    }
}
int sum(int x) {
    int ans = 0;
    while (x) {
        ans += t[x];
        x -= lb(x);
    }
    return ans;
}
signed main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        f[i] = n + 1;
    }
    for (int i = n; i >= 1; i--) {
        ans += sum(f[a[i]] - 1);
        if (f[a[i]])
            add(f[a[i]], -1);
        f[a[i]] = i;
        add(i, 1);
    }
    printf("%lld", ans);
    return 0;
}