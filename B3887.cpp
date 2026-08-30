// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
int a, b, c, x;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    for (int i = 1; i <= 8; i++) {
        cin >> x;
        if (x >= 118)
            a++;
        if (x >= 63)
            b++;
        if (x >= 41)
            c++;
    }
    if (a)
        cout << 10;
    else if (b >= 4)
        cout << 8;
    else if (c >= 4)
        cout << 3;
    else
        cout << 1;
    return 0;
}
