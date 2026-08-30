#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
int T[N], M[N], l, r, n;
void SE() {
    cout << "System Error\n";
}
void AC() {
    cout << "Accepted\n";
}
void TLE() {
    cout << "Time Limit Exceeded\n";
}
void MLE() {
    cout << "Memory Limit Exceeded\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) {
        cin >> T[i] >> M[i];
        T[i] /= 2;
    }
    for (int i = 1; i <= n; i++) {
        int t, m;
        cin >> t >> m;
        if (i <= r and i >= l) {
            SE();
        } else if (M[i] > m) {
            MLE();
        } else if (T[i] > t) {
            TLE();
        } else {
            AC();
        }
    }
    return 0;
}