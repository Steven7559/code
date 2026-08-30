#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool f(int x) {
    return x >= 30 and x <= 70;
}
int a, b, c;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> a >> b >> c;
    if (f(a))
        cout << a << endl;
    else if (f(b) or f(c)) {
        if (f(b) and f(c))
            cout << min(b, c) << endl;
        else if (f(b) and !f(c))
            cout << b << endl;
        else
            cout << c << endl;
    } else
        cout << 0 << endl;
    return 0;
}
