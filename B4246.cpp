#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 5005;
int n, m, a[N], x = 1;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++) {
        int o = a[x];
        for (int j = 1; j <= o; j++) {
            if (x == 1) {
                x = n;
                continue;
            } else {
                x--;
            }
        }
    }
    cout << x;
    return 0;
}