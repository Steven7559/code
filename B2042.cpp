#include <bits/stdc++.h>
using namespace std;
int x;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> x;
    if (x % 15 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
