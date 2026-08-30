#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n, s[20][20], minn = 114514, w, d;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    s[1][1] = 2;
    for (int i = 2; i <= 20; i++) {
        s[i][1] = s[i - 1][1] + 1;
    }
    for (int i = 2; i <= 20; i++) {
        s[1][i] = s[1][i - 1] + 7;
    }
    for (int i = 2; i <= 20; i++) {
        for (int j = 2; j <= 20; j++) {
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
        }
    }
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> w >> d;
        if (s[w][d] < minn)
            minn = s[w][d];
    }
    cout << minn;
    return 0;
}
