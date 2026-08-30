#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
int n, m, a, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        int x = abs(a - m);
        if (x == 0)
            ans += 2;
        else if (x <= 2)
            ans += 1;
    }
    cout << ans << endl;
    return 0;
}
