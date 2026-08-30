#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n, s[114514];
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> n;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> s[i];
    }
    for (int i = 1; i <= 2 * n; i++) {
        if (!(s[i] != i && s[s[i]] == i)) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
