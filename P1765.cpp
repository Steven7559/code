#include <bits/stdc++.h>
using namespace std;
int a[] = {1, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1,
           2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
string s;
int ans;
int main() {
    getline(cin, s);
    for (auto c : s) {
        int x = c - 'a' + 1;
        if (c == ' ')
            x = 0;
        ans += a[x];
    }
    cout << ans;
    return 0;
}