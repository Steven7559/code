#include <bits/stdc++.h>
#define ll long long
using namespace std;
int f, n, m, ans;
int main() {
    cin >> f >> m >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            ans += 2 * f + m;
        }
    }
    cout << ans;
}
