#include <bits/stdc++.h>
using namespace std;
int n, k;
int main() {
    cin >> n >> k;
    cout << k - n % k;
    return 0;
}