#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int p[N], n, cnt0, cnt;
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        if (p[i] == 0) {
            cnt0++;
            cnt++;
        } else if (p[i] == -1) {
            cnt++;
        } else {
            break;
        }
    }
    cout << cnt << ' ' << cnt0;
    return 0;
}
