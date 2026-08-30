#include <bits/stdc++.h>
#define ll long long
using namespace std;
int l, e;
int main() {
    cin >> l >> e;
    if (l >= 8 or (l >= 6 and e == 1)) {
        cout << 3;
    } else if (l >= 3) {
        cout << 6;
    } else if (l < 3) {
        cout << "Impossible";
    }
    return 0;
}
