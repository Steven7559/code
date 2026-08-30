#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int x, y;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> y;
    if ((x % 4 == 0 and x % 100 != 0) or x % 400 == 0)
        a[2]++;
    cout << a[y];
    return 0;
}
