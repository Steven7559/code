#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 0;
int a, b, c, maxn;
int main() {
    cin >> a >> b >> c;
    maxn = max(a, b);
    if (maxn <= c or a == b) {
        cout << "None";
    } else if (a > b) {
        cout << "LeftToRight";
    } else if (b > a) {
        cout << "RightToLeft";
    }
    return 0;
}