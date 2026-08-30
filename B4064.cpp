#include <bits/stdc++.h>
using namespace std;
int a, t;
double x;
int main() {
    cin >> t;
    while (t--) {
        cin >> a;
        x = pow(a, 0.25);
        if (x > 0 && ceil(x) == x) {
            cout << x;
        } else {
            cout << -1;
        }
        cout << endl;
    }
}