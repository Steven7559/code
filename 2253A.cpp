#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int t;
bool ck(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (ck(x + 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
