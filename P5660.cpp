#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    // freopen("filename.in","r",stdin);
    // freopen("filename.out","w",stdout);
    for (int i = 1; i <= 8; i++) {
        if (getchar() == '1') {
            n++;
        }
    }
    cout << n;
}