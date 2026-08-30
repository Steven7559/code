#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[10005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (!a[x])
            a[x] = i;
    }
    int k;
    cin >> k;
    cout << a[k] - 1;
    return 0;
}
