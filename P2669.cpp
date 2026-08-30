#include <bits/stdc++.h>
using namespace std;
int k, n, i, j, cnt = 1;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> k;
    for (i = 1; i <= k; i++) {
        for (j = 1; j <= i; j++) {
            n += i;
            cnt++;
            if (cnt > k) {
                cout << n;
                return 0;
            }
        }
    }
}