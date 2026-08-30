#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, ans, t;
string s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n >> ans;
    t = ans;
    while (n--) {
        cin >> s;
        if (s.find("kirai") != string::npos) {
            if (ans >= 0)
                ans = 0;
        } else if (s.find("daishuki") != string::npos) {
            ans += 2;
        } else if (s.find("shuki") != string::npos) {
            ans++;
        } else {
            ans--;
        }
    }
    if (ans > 0)
        cout << ans - t;
    else
        cout << "shuki";
    return 0;
}