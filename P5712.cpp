#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //	freopen(".in","r",stdin);
    //	freopen(".out","w",stdout);
    cin >> a;
    if (a <= 1) {
        printf("Today, I ate %d apple.", a);
    } else {
        printf("Today, I ate %d apples.", a);
    }
    return 0;
}
