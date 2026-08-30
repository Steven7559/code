#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
priority_queue< int > q;  // 大根堆
int n, a[N], b[N], ans[N];
signed main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &b[i]);
    }
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int c = a[i] + b[j];
            if (q.size() < n) {
                q.push(c);
            } else if (q.top() > c) {
                q.pop();
                q.push(c);
            } else {
                break;
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        ans[i] = q.top();
        q.pop();
    }
    for (int i = 1; i <= n; i++) {
        printf("%lld ", ans[i]);
    }
    return 0;
}