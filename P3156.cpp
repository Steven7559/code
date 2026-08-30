#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e6 + 5;
int a[N], n, m;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (m--) {
        int i;
        cin >> i;
        cout << a[i] << endl;
    }
    return 0;
}