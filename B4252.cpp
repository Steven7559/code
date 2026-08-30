#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector< ll > v;
ll n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v[i] *= x;
    }
    ll sum = 0;
    for (auto x : v) {
        sum += x;
    }
    cout << sum << endl;
    return 0;
}