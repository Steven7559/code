#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N = 21;  // 数据范围
string s[N];
int n;
bool cmp(string a, string b) {
    return a + b > b + a;
}
int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    sort(s + 1, s + 1 + n, cmp);
    for (int i = 1; i <= n; i++) {
        cout << s[i];
    }
    return 0;
}