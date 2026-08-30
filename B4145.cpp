#include <bits/stdc++.h>
#define LL long long
using namespace std;
int x, y, z, maxn = 0, tmp, cnt = 0;
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> x >> y >> z;
    for (int i = 0; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            for (int k = 0; k <= z; k++) {
                tmp = (i + j) ^ k;
                if (tmp == maxn) {
                    cnt++;
                } else if (tmp > maxn) {
                    cnt = 1;
                    maxn = tmp;
                }
            }
        }
    }
    cout << maxn << endl << cnt;
    return 0;
}
