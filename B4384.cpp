#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 105;
int t;
bool check(int i, int j, int n) {
    if (i == 1)
        return 1;
    else if (j == 1 || j == n)
        return 1;
    else if ((i * j) % 10 == 6)
        return 1;
    else
        return 0;
}
signed main() {
    cin >> t;
    while (t--) {
        int n, c[N]{0}, cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= c[i]; j++) {
                if (check(i, j, c[i]))
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
