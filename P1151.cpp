#include <bits/stdc++.h>
#define int long long
using namespace std;
int k;
bool f;
signed main() {
    cin >> k;
    for (int i = 10000; i <= 30000; i++) {
        if (i / 100 % k == 0) {
            if ((i / 10 - i / 10000 * 1000) % k == 0) {
                if ((i - i / 1000 * 1000) % k == 0) {
                    cout << i << '\n';
                    f |= 1;
                }
            }
        }
    }
    if (!f) {
        cout << "No";
    }
    return 0;
}