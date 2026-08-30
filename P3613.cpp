#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, q;
vector< vector< int > > v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> q;
    while (q--) {
        int op, i, j;
        cin >> op >> i >> j;
        if (op == 2) {
            cout << v[i][j] << endl;
        } else {
            int k;
            cin >> k;
            v[i][j] = k;
        }
    }
    return 0;
}