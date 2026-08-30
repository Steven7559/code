#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 1e5 + 5;  // 数据范围
int n, a[N], n2;
bool f[N];  // i 能否被表示
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        n2 = 0;
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        f[0] = 1;
        sort(a + 1, a + 1 + n);
        for (int i = 1; i <= n; i++) {
            if (f[a[i]] != 1)
                n2++;
            for (int j = a[i]; j <= a[n]; j++) {
                f[j] |= f[j - a[i]];
            }
        }
        cout << n2 << endl;
    }
    return 0;
}