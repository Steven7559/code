#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
signed main() {
    cin >> n >> k;
    n -= k;
    k = ceil(n * 1.0 / 100.0);
    cout << k;
    return 0;
}