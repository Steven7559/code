#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a, b;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    b %= 10;
    if (b == 3 or b == 8)
        cout << 0;
    else if (b < 3)
        cout << 3 - b;
    else if (b < 8)
        cout << 8 - b;
    else
        cout << 13 - b;
    return 0;
}