#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[15];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= 3; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + 3);
    for (int i = 1; i <= 3; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
