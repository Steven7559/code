#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2005;
int n, a[N], b[N], ans;  // a t,b q
bool cmp(int a, int b) {
    return a > b;
}
signed main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    int i = 1, j = 1, x = n, y = n;
    for (int k = 1; k <= n; k++) {
        if (a[i] > b[j]) {
            ans++;
            i++;
            j++;
        } else if (a[x] > b[y]) {
            ans++;
            x--;
            y--;
        } else if (a[i] == b[y]) {
            break;
        } else {
            ans--;
            i++;
            y--;
        }
    }
    cout << 200 * ans;
    return 0;
}