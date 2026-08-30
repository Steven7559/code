#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 21;  // 数据范围
int n, a[N][N];
int main() {
    cin >> n;
    for (int i = 1; i <= N; i++) {
        a[i][1] = 1;
        a[i][i] = 1;
    }
    for (int i = 3; i <= N; i++) {
        for (int j = 2; j < i; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j])
                cout << a[i][j] << " ";
            else {
                cout << endl;
                break;
            }
        }
        continue;
    }
    return 0;
}