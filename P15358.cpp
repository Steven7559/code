#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
bool ck(string s) {
    return s[0] == 'Q' and s.size() == 1;
}
ll n, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n--) {
        ll x;
        cin >> s >> x;
        if (ck(s))
            ans += x;
    }
    cout << ans;
    return 0;
}
