#include <iostream>
#define LL long long
using namespace std;
const int N = 35;
int t = 1, n, a[N];

int main() {
    cin >> t;
    for (int j = 1; j <= t; j++) {
        cin >> n;
        a[1] = 1;
        a[2] = 1;
        for (int i = 3; i <= n; i++) {
            a[i] = a[i - 1] + a[i - 2];
        }
        cout << a[n];
        cout << endl;
    }
    return 0;
}