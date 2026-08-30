#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
ll sum, n, x;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    while (n--) {
        cin >> x;
        sum += x;
    }
    if (sum % 2)
        cout << "Alice";
    else
        cout << "Bob";
    return 0;
}