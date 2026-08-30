#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 4e5 + 5;
int dp[2 * N], a[N], n, L, R, maxn;
deque< int > dq;
void upd(int x) {
    while (!dq.empty() && dp[x] >= dp[dq.back()])
        dq.pop_back();
    dq.push_back(x);
}
signed main() {
    scanf("%lld%lld%lld", &n, &L, &R);
    for (int i = 0; i <= n; i++) {
        scanf("%lld", &a[i]);
    }
    a[0] = 0;
    memset(dp, 0x8f, sizeof(dp));
    dp[0] = 0;
    maxn = dp[1];
    for (int i = L; i <= n; i++) {
        upd(i - L);
        while (!dq.empty() and dq.front() + R < i)
            dq.pop_front();
        int t = 0;
        if (!dq.empty())
            t = dq.front();
        dp[i] = dp[t] + a[i];
        if (i + R > n)
            maxn = max(maxn, dp[i]);
    }
    printf("%lld", maxn);
    return 0;
}
