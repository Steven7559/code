#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 105;
int t, n, a[N];
bool cmp(int p, int q) {
    return p < q;
}
signed main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + 1 + n, cmp);
        int minn = 1e9;
        for (int i = 1; i <= n; i++) {
            int cnt1 = 0, cnt2 = 0;
            for (int j = 1; j < i; j++) {
                if (a[j] < a[i])
                    cnt1++;
                // else break;
            }
            for (int j = i + 1; j <= n; j++) {
                if (a[j] > a[i])
                    cnt2++;
                // else break;
            }
            minn = min(minn, max(cnt1, cnt2));
        }
        cout << minn << '\n';
    }
    return 0;
}