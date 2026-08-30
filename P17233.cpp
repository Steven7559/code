#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int n, len;
int a[N], tr[N];
vector< vector< int > > ans;
vector< int > d, e;
int lb(int x) {
    return x & (-x);
}
void add(int id, int num) {
    while (id <= n) {
        tr[id] += num;
        id += lb(id);
    }
}
int sum(int x) {
    int res = 0;
    while (x) {
        res += tr[x];
        x -= lb(x);
    }
    return res;
}
int f(int k) {
    int x = 0;
    int p = 1 << 20;
    while (p) {
        int y = x + p;
        if (y <= n && tr[y] < k) {
            x = y;
            k -= tr[y];
        }
        p >>= 1;
    }
    return x + 1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    len = n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        add(i, 1);
    }
    while (len) {
        d.clear();
        e.clear();
        for (int i = 1; 1LL * i * i * i <= len; i++) {
            int pos = f(i * i * i);
            d.push_back(pos);
            e.push_back(a[pos]);
        }
        for (auto x : d) {
            add(x, -1);
        }
        ans.push_back(e);
        len -= d.size();
    }
    cout << ans.size() << endl;
    for (auto &v : ans) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}