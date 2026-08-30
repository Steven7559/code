#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a, b;
int main() {
    cin >> a >> b;
    b += a * 10;
    b /= 19;
    cout << b;
    return 0;
}
