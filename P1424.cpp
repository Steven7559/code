#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int x, n;
ll ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        if (x > 7)
            x = 1;
        if (x != 6 and x != 7)
            ans += 250;
        x++;
    }
    cout << ans;
    return 0;
}
