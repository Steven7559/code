#include <bits/stdc++.h>
using namespace std;
int n, sum;
string T;
int main() {
    cin >> n;
    cin >> T;
    for (char c : T) {
        if (islower(c)) {
            sum += c - 'a' + 1;
        } else if (isupper(c)) {
            sum -= (int)c;
        }
    }
    cout << sum;
    return 0;
}