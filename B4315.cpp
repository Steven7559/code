#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t[55], s[55], n, x, y, sum;
int main() {
    cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        cin >> t[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    cin >> x >> y;
    for (int i = x; i < y; i++) {
        sum += t[i];
    }
    for (int i = x; i <= y; i++) {
        sum += s[i];
    }
    cout << sum;
}
