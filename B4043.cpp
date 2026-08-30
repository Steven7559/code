#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n, a, b, a1 = 0, b1 = 0;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> n >> a >> b;
    if (b == 0) {
        cout << a;
        return 0;
    }
    if (a - b >= 0) {
        cout << a - b << " ";
        a1 = 1;
    }
    if (a + b <= n) {
        cout << a + b;
        b1 = 1;
    }
    if (a1 == 0 && b1 == 0) {
        cout << "No solution";
    }
    return 0;
}
