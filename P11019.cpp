#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    cout << '/';
    cin >> s;
    for (auto c : s) {
        if (c == ']')
            break;
        if (c >= 'A' and c <= 'Z')
            cout << char(c - 'A' + 'a');
    }
    return 0;
}