#include <bits/stdc++.h>
using namespace std;
int x;
int main() {
    cin >> x;
    cout << (x % 400 == 0 or (x % 4 == 0 and x % 100 != 0)) << endl;
    return 0;
}
