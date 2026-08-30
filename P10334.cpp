#include <bits/stdc++.h>
#define int long long
using namespace std;
stack< int > s;
int t[200005], a[200005], n, sum;
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
        if (t[i] < i) {
            cout << "-1";
            return 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--) {
        int tmp = t[i + 1] - t[i];
        while (!s.empty() && tmp--) {
            sum += s.top();
            s.pop();
        }
        if (!s.empty()) {
            s.push(max(a[i], s.top()));
        } else {
            s.push(a[i]);
        }
    }
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}