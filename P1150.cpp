#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0, k, total = 0;
int main() {
    cin >> n >> k;
    while (n) {
        n--;
        cnt++;
        total++;
        if (cnt == k) {
            total++;
            cnt = 1;
        }
    }
    cout << total;
    return 0;
}