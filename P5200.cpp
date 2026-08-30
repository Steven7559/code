#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 5, M = 1e5 + 5;
int n, op, x, y, m, a[N], b[M], ans[N];
int lb(int x) {
    return x & (-x);
}
void add(int id, int num) {
    while (id <= n) {
        a[id] += num;
        id += lb(id);
    }
}
int sum(int x) {
    int ans = 0;
    while (x) {
        ans += a[x];
        x -= lb(x);
    }
    return ans;
}
signed main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &b[i]);
    }
    int k = 0, su = n;
    while (b[n - k] > b[n - k - 1]) {
        add(b[n - k], 1);
        su--;
        k++;
    }
    add(b[n - k], 1), su--;
    for (int i = 1; i <= su; i++) {
        add(b[i], 1);
        ans[i] = su - i + sum(b[i] - 1);
    }
    printf("%lld\n", su);
    for (int i = 1; i <= su; i++) {
        printf("%lld ", ans[i]);
    }
    return 0;
}