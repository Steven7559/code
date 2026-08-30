#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 3e7 + 5;
string s, t = "";
int n, r = 0, mid, len[N], maxn = 0;
signed main() {
    cin >> s;
    n = s.size() * 2 + 1;
    t += ' ';
    for (auto c : s) {
        t += '*';
        t += c;
    }
    t += '*';
    for (int i = 1; i <= n; i++) {
        if (i <= r) {
            len[i] = min(r - i, len[2 * mid - i]);
        }
        while (i + len[i] + 1 <= n && i - len[i] - 1 >= 1 &&
               t[i + len[i] + 1] == t[i - len[i] - 1]) {
            len[i]++;
        }
        if (i + len[i] > r) {
            r = i + len[i];
            mid = i;
            maxn = max(maxn, len[i]);
        }
    }
    cout << maxn << endl;
    return 0;
}