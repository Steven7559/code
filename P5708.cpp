#include <bits/stdc++.h>
#define LL long long
using namespace std;
double s, c, b, a, p;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf", s);
    return 0;
}
