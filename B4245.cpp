#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 999;
int n, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        cout << a[i] << ",";
    }
    cout << a[n];
    return 0;
}