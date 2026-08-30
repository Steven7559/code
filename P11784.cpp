#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] >= '0' && s[0] <= '9')
            cout << "https://www.luogu.com.cn/problem/P" << s;
        else
            cout << "https://www.luogu.com.cn/problem/" << s;
        cout << endl;
    }
    return 0;
}
