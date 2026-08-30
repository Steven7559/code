#include <iostream>
using namespace std;
int a, b, c, d;
int main() {
    cin >> a >> b >> c >> d;
    int x = c - a, y = d - b;
    if (y < 0) {
        x--;
        y += 60;
    }
    cout << x << " " << y;
    return 0;
}