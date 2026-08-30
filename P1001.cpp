#include <bits/stdc++.h>
using namespace std;
int read() {
    int f = 1, s = 0;
    char ch = getchar();
    while (ch < '0' or ch > '9') {
        if (ch == '-')
            f *= -1;
        ch = getchar();
    }
    while (ch >= '0' and ch <= '9') {
        s = s * 10 + ch - '0';
        ch = getchar();
    }
    return s * f;
}
int a, b;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    a = read();
    b = read();
    cout << a + b;
    return 0;
}