#include <bits/stdc++.h>
using namespace std;
int t;
int n, x, y;
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        while (n--) {
            char c;
            cin >> c;
            if (c == 'F')
                x--;
            else
                y--;
        }
        cout << int(ceil(x * 1.0 / y)) << endl;
    }
    return 0;
}