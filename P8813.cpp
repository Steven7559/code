#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c;
signed main() {
    cin >> a >> b;
    c = a;
    if (a == 1 or b == 0) {
        cout << 1;
        return 0;
    }
    for (int i = 1; i < b; i++) {
        c *= a;
        if (c > 1e9) {
            cout << -1;
            return 0;
        }
    }
    cout << c;
    return 0;
}