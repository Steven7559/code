#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e4 + 5;
int n, k;
vector< int > a, b;
int suma, sumb;
double ansa, ansb;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0)
            a.push_back(i);
        else
            b.push_back(i);
    }
    for (auto x : a) {
        suma += x;
    }
    ansa = suma * 1.0 / a.size();
    for (auto x : b) {
        sumb += x;
    }
    ansb = sumb * 1.0 / b.size();
    printf("%.1f %.1f", ansa, ansb);
    return 0;
}
