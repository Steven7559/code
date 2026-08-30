#include <bits/stdc++.h>
#define int long long
using namespace std;
double n, p;
signed main() {
    while (cin >> n >> p) {
        printf("%.0lf\n", pow(p, 1 / n));
    }
    return 0;
}