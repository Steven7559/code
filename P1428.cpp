#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, a[105];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        cin >> a[i];
        for (int j = 1; j < i; j++) {
            cnt += (a[j] < a[i]);
        }
        cout << cnt << ' ';
    }
    return 0;
}