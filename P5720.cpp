#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a;
int cnt;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a;
    while (1) {
        if (a == 1) {
            cout << cnt + 1;
            return 0;
        }
        cnt++;
        a /= 2;
    }
    return 0;
}
