#include <bits/stdc++.h>
using namespace std;
int n, minn = INT_MAX;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        minn = min(minn, b / a);
    }
    cout << minn << endl;
    return 0;
}