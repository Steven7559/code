#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, y, s, t;
bool f(int i) {
    return (s * i - y) % t == 0 and i * s >= y;
}
signed main() {
    cin >> n >> y >> s >> t;
    for (int i = 1; i <= n; i++) {
        if (!f(i) and !f(i - 1)) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}