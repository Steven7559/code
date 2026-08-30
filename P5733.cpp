#include <bits/stdc++.h>
using namespace std;
string n;
int main() {
    getline(cin, n);
    for (int i = 0; i <= n.size(); i++) {
        if (n[i] >= 'a' && n[i] <= 'z') {
            n[i] = n[i] - 'a' + 'A';
        }
    }
    cout << n << endl;
    return 0;
}