#include <bits/stdc++.h>
using namespace std;
int k;
double total = 0.00, n = 1.00;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> k;
    while (1) {
        total += 1.00 / n;
        if (total > k) {
            cout << n;
            return 0;
        }
        n++;
    }
}
