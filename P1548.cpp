#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> n >> m;
    int nn = min(n, m);
    int z = m * n * (nn + 1) + nn * (nn + 1) * (2 * nn + 1) / 6 -
            (m + n) * nn * (nn + 1) / 2;
    int c = n * (n + 1) / 2 * m * (m + 1) / 2 - z;
    cout << z << " " << c << endl;
    return 0;
}