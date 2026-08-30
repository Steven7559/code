#include <bits/stdc++.h>
#define int long long
using namespace std;
unsigned int a, b, n;
signed main() {
    cin >> n >> a >> b;
    unsigned int c = a * n;
    cout << min(c, b);
    return 0;
}