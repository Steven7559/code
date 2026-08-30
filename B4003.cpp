#include <bits/stdc++.h>
using namespace std;
char ans;
int n, mo26;
int main() {
    cin >> n;
    mo26 = n % 26;
    for (int i = 1; i <= 26; i++) {
        ans = 'A' + (n + i - 1) % 26;
        cout << ans;
    }
    return 0;
}