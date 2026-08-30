#include <bits/stdc++.h>
using namespace std;
char s;
int ChangDu;
int main() {
    while (s != '\n') {
        s = getchar();
        if (s == ' ') {
            continue;
        } else {
            ChangDu++;
        }
    }
    ChangDu -= 1;
    cout << ChangDu << endl;
    return 0;
}