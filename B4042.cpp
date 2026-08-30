#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL a, a1;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> a;
    a1 = a;
    a1 += 5;
    a1 *= 3;
    cout << a1 << " ";
    a1 = a;
    a1 *= 3;
    a1 += 5;
    cout << a1;
    return 0;
}
