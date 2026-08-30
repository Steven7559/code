#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
bool f(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int n;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 4; i <= n; i += 2) {
        cout << i;
        cout << '=';
        for (int j = 1; j <= n; j++) {
            int k = i - j;
            if (!f(j) or !f(k))
                continue;
            else {
                cout << j;
                cout << '+';
                cout << i - j << endl;
                break;
            }
        }
    }
    return 0;
}