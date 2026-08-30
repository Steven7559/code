#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5;
ll m, n, a[N], cnt = 0;
ll chai(ll x) {
    ll sum = 0;
    for (int i = x; i != 0; i /= 10) {
        sum += i % 10;
    }
    return sum;
}
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % m != 0 and chai(a[i]) % m == 0) {
            cout << a[i] << endl;
            cnt++;
        }
    }
    if (cnt == 0) {
        cout << "None";
    }
    return 0;
}
