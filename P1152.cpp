#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100000 + 5;
int a[N], n;
bool f[N];
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < +n; i++) {
        f[abs(a[i] - a[i + 1])] = 1;
    }
    for (int i = 1; i < +n; i++) {
        if (!f[i]) {
            cout << "Not jolly";
            return 0;
        }
    }
    cout << "Jolly";
    return 0;
}