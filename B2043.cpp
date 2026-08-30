#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int x;
int cnt;
int a[] = {3, 5, 7};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x;
    for (int i = 0; i < 3; i++) {
        if (x % a[i] == 0) {
            cnt++;
            cout << a[i] << ' ';
        }
    }
    if (!cnt)
        cout << 'n';
    return 0;
}