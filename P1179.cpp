#include <bits/stdc++.h>
using namespace std;
int a, b, n;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 10 == 2) {
            n++;
        }
        if (i % 100 / 10 == 2) {
            n++;
        }
        if (i % 1000 / 100 == 2) {
            n++;
        }
        if (i % 10000 / 1000 == 2) {
            n++;
        }
        if (i % 100000 / 10000 == 2) {
            n++;
        }
        if (i / 100000 == 2) {
            n++;
        }
    }
    cout << n;
}
