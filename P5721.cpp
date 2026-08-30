#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cnt++;
            if (cnt < 10)
                cout << '0' << cnt;
            else
                cout << cnt;
        }
        cout << endl;
    }
    return 0;
}
