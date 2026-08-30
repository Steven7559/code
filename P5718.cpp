#include <bits/stdc++.h>
using namespace std;
int a, minn = 1e9;
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        minn = min(minn, a);
    }
    cout << minn << endl;
    return 0;
}
