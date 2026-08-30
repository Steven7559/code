#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n, x, y, n1, n2;
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> x >> y;
    n1 = (n - y + x) % n;
    n2 = (y - x + n) % n;
    if (n1 < n2) {
        cout << "Counter-clockwise Loop";
    } else if (n1 > n2) {
        cout << "Clockwise Loop";
    } else {
        cout << "\"Wonderful\"";
    }
    return 0;
}