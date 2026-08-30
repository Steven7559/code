#include <bits/stdc++.h>
using namespace std;
double a, b, c;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    cin >> a >> b >> c;
    if (a * a > b * c) {
        cout << "Alice";
    } else {
        cout << "Bob";
    }
    return 0;
}