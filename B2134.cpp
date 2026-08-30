#include <bits/stdc++.h>
#define int long long
using namespace std;
bool f(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
signed main() {
    int x, maxn = 0;
    cin >> x;
    for (int i = 2; i <= x - 2; i++) {
        int j = x - i;
        if (!f(i) or !f(j))
            continue;
        maxn = max(maxn, i * j);
    }
    cout << maxn;
    return 0;
}