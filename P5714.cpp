#include <bits/stdc++.h>
using namespace std;
using ll = long long;
double m, h, bmi;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> h;
    bmi = m / h / h;
    if (bmi < 18.5) {
        cout << "Underweight";
    } else if (bmi >= 18.5 and bmi < 24) {
        cout << "Normal";
    } else {
        cout << bmi << endl;
        cout << "Overweight";
    }
    return 0;
}
