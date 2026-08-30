#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int n = 2, a[5], b[5];
signed main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a[1];
    cin >> a[2];
    cin >> b[1];
    cin >> b[2];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] * b[j] > INT_MAX or a[i] * b[j] < INT_MIN) {
                cout << "long long int";
                return 0;
            }
        }
    }
    cout << "int";
    return 0;
}