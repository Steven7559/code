#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int n, cnt, t[N], t2[N], b[N], b2[N], l[N], r[N];
struct node {
    int num, pos;
} a[N];
int lb(int x) {
    return x & (-x);
}
//=======R========
void add(int id, int num) {
    while (id <= n) {
        t[id] += num;
        id += lb(id);
    }
}
bool cmp(node x, node y) {
    if (x.num == y.num)
        return x.pos > y.pos;
    return x.num > y.num;
}
int sum(int x) {
    int ans = 0;
    while (x) {
        ans += t[x];
        x -= lb(x);
    }
    return ans;
}
//=======L========
void add2(int id, int num) {
    while (id <= n) {
        t2[id] += num;
        id += lb(id);
    }
}
bool cmp2(node x, node y) {
    if (x.num == y.num)
        return x.pos < y.pos;
    return x.num > y.num;
}
int sum2(int x) {
    int ans = 0;
    while (x) {
        ans += t2[x];
        x -= lb(x);
    }
    return ans;
}
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].num;
        a[i].pos = i;
    }
    //=======R========
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++) {
        b[a[i].pos] = i;
    }
    for (int i = 1; i <= n; i++) {
        r[i] = sum(b[i]);
        add(b[i], 1);
    }
    //=======L========
    sort(a + 1, a + 1 + n, cmp2);
    for (int i = 1; i <= n; i++) {
        b2[a[i].pos] = i;
    }
    for (int i = n; i >= 1; i--) {
        l[i] = sum2(b[i]);
        add2(b2[i], 1);
        int maxn = max(l[i], r[i]);
        int minn = min(l[i], r[i]);
        // cout << maxn << " " << minn << endl;
        if (maxn > 2 * minn)
            cnt++;
    }
    cout << cnt;
    return 0;
}
