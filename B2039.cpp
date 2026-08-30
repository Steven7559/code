#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b;
signed main() {
    cin >> a >> b;
    if (a > b)
        printf(">");
    else if (a < b)
        printf("<");
    else
        printf("=");
    return 0;
}