#include <bits/stdc++.h>
#define LL long long
using namespace std;
int n, k, a[5005], ans;
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i + k - 1 <= n; i++) {
        for (int j = i; j <= i + k - 1; j++) {
            a[j] -= 2;
        }
        int win = 0;
        for (int j = 1; j <= n; j++) {
            if (99 - a[j] > a[j])
                win++;
        }
        if (win > n - win)
            ans++;
        for (int j = i; j <= i + k - 1; j++) {
            a[j] += 2;
        }
    }
    cout << ans;
    return 0;
}
