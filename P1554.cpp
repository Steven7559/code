#include <bits/stdc++.h>
#define ll long long
using namespace std;
int l, r, a[15];
void f(int x) {
    int m = x % 10;
    a[m]++;
    if (x / 10)
        f(x / 10);
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        f(i);
    }
    for (int i = 0; i <= 9; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}