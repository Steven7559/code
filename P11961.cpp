#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod_pow(ll x, ll y, ll mod) {
    ll res = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            res = res * x % mod;
        }
        x = x * x % mod;
        y /= 2;
    }
    return res;
}

bool is_primitive_root(ll a, ll p) {
    if (mod_pow(a, p - 1, p) != 1) {
        return false;
    }
    ll phi = p - 1;
    vector< ll > factors;
    ll temp = phi;
    for (ll i = 2; i * i <= temp; ++i) {
        if (temp % i == 0) {
            factors.push_back(i);
            while (temp % i == 0) {
                temp /= i;
            }
        }
    }
    if (temp > 1) {
        factors.push_back(temp);
    }
    for (ll d : factors) {
        if (mod_pow(a, phi / d, p) == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        ll a, p;
        cin >> a >> p;
        if (is_primitive_root(a, p)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}