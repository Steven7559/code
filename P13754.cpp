#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e6 + 5;
int t, n, a[N], v[N], pos[15], op, sum;
signed main() {
    scanf("%lld", &t);
    while (t--) {
        sum = 0, op = 0, pos[1] = 0, pos[0] = 0;
        int sumq = 0, minn = INT_MAX;
        scanf("%lld", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);
            v[i] = abs(a[i] - i) % 2;
            sum += v[i];
            op = max(op, sumq - minn - v[i] + pos[(a[i] + 1) % 2]);
            if (v[i])
                sumq--;
            else
                sumq++;
            if (sumq < minn) {
                minn = sumq;
                pos[1] = pos[0] = 0;
                pos[(i + 1) % 2] = 1;
            } else if (sumq == minn) {
                pos[(i + 1) % 2] = 1;
            }
        }
        printf("%lld\n", max(op + sum, sum));
    }
    return 0;
}
