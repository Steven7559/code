#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[15], b[15], ans = 1e9;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= 3; i++) {
        cin >> a[i] >> b[i];
        ans = min(int(ceil(n * 1.0 / a[i]) * b[i]), ans);
    }
    cout << ans << endl;
    return 0;
}
