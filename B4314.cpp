#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, a1, e1, c1, a, e, c;
int min3(int x, int y, int z) {
    return min(x, min(y, z));
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a1 >> e1 >> c1;
        a += (8 - a1);
        e += (12 - e1);
        c += (1 - c1);
    }
    a /= 8;
    e /= 12;
    c /= 1;
    cout << min3(a, e, c);
}
