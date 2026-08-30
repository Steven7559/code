#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int x, a, b, t;
signed main() {
    scanf("%lld%lld%lld%lld", &x, &a, &b, &t);
    x /= 60;
    if (x < 1)
        printf("0");
    else if (x >= 1 and x < 2)
        printf("%lld", a);
    else if (x >= 2 and x < 4)
        printf("%lld", b);
    else
        printf("%lld", t);
    return 0;
}
