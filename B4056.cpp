#include <bits/stdc++.h>
using namespace std;
int x, t, f[6], a[6];
bool cmp(int a, int b) {
    return a > b;
}
int main() {
    cin >> x >> t;
    while (t--) {
        for (int i = 1; i <= 5; i++) {
            cin >> f[i];
        }
        sort(f + 1, f + 6, cmp);
        for (int i = 1; i <= 5; i++) {
            if (f[i] <= x) {
                x -= f[i];
                a[f[i]]++;
                break;
            }
        }
    }
    for (int i = 1; i <= 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl << x;
}