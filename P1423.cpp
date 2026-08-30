#include <bits/stdc++.h>
float s, dis;
int cnt;
using namespace std;
int main(void) {
    cin >> s;
    for (cnt = 0; s >= 0; cnt++) {
        dis = 2 * (pow(0.98, cnt));
        s -= dis;
    }
    cout << cnt;
    return 0;
}