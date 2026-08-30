#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5;
int a[3][2][5];
void init() {
    a[1][1][2] = 320;
    a[1][2][2] = 350;
    a[1][2][4] = 380;
    a[2][1][2] = 737;
    a[2][2][4] = 747;
    a[2][2][2] = 787;
    a[3][1][2] = 919;
}
int x, y, z;
char c, s;
signed main() {
    init();
    cin >> c >> s >> z;
    cout << c;
    x = c - 'A' + 1;
    if (s == 'N')
        y = 1;
    else
        y = 2;
    cout << a[x][y][z];
    return 0;
}
