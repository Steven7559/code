#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[15];
string s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a[1] >> a[2] >> a[3];
    sort(a + 1, a + 1 + 3);
    for (int i = 1; i <= 3; i++) {
        char c;
        cin >> c;
        int j = c - 'A' + 1;
        cout << a[j] << ' ';
    }
    return 0;
}
