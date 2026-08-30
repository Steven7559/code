#include <bits/stdc++.h>
using namespace std;
int n;
char c;
int ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> c;
    ans += (c == 'y') * 5;
    ans += 8;
    n -= 1000;
    while (n > 0) {
        n -= 500;
        ans += 4;
    }
    cout << ans;
    return 0;
}
