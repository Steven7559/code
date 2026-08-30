#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int x, y, ans;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> y;
    for (int a = x; a <= y; a++) {
        for (int b = x; b <= y; b++) {
            for (int c = x; c <= y; c++) {
                for (int d = x; d <= y; d++) {
                    ans += int(a * d - b * c == 0);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}