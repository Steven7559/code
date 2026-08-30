#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1005;
struct arr {
    short l;
    int a[N] = {0};
};
map< string, arr > mp;
void q() {
    cout << "-1\n";
    exit(0);
}
int vis(string name, int pos) {
    if (mp.find(name) == mp.end())
        q();
    arr t = mp[name];
    if (pos >= t.l)
        q();
    else
        return t.a[pos];
}
int f(string s) {
    if (isalpha(s[0])) {
        int l = 0, r = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[') {
                l = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ']') {
                r = i;
                break;
            }
        }
        string name = s.substr(0, l);
        int x = f(s.substr(l + 1, r - l - 1));
        return vis(name, x);
    } else {
        int x = 0;
        for (int i = 0; i < s.size(); i++) {
            x *= 10;
            x += s[i] - '0';
        }
        return x;
    }
}
string op, s;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin >> op >> s) {
        if (op == "int") {
            int l = 0, r = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '[') {
                    l = i;
                    break;
                }
            }
            for (int i = s.size() - 1; i >= 0; i--) {
                if (s[i] == ']') {
                    r = i;
                    break;
                }
            }
            string name = s.substr(0, l);
            int x = f(s.substr(l + 1, r - l - 1));
            mp[name].l = x;
        } else if (op == "cout") {
            cout << f(s) << '\n';
        } else {
            int num = f(s);
            int l = 0, r = 0;
            for (int i = 0; i < op.size(); i++) {
                if (op[i] == '[') {
                    l = i;
                    break;
                }
            }
            for (int i = op.size() - 1; i >= 0; i--) {
                if (op[i] == ']') {
                    r = i;
                    break;
                }
            }
            string name = op.substr(0, l);
            int x = f(op.substr(l + 1, r - l - 1));
            if (x >= mp[name].l)
                q();
            mp[name].a[x] = num;
        }
    }
    return 0;
}