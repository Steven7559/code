#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if (5 * n < 11 + 3 * n)
        cout << "Local";
    else
        cout << "Luogu";
    return 0;
}