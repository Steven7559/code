#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int x;
int a, b;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x;
    a = (x % 2 == 0);
    b = (x > 4 and x <= 12);
    cout << (a + b == 2) << ' ' << (a + b >= 1) << ' ' << (a + b == 1) << ' '
         << (a + b == 0) << endl;
    return 0;
}