#include <bits/stdc++.h>
#define LL long long
using namespace std;
int poker[5][20], n, cnt;
string s;

int main() {
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s == "DA")
            poker[1][1]++;
        if (s == "CA")
            poker[2][1]++;
        if (s == "HA")
            poker[3][1]++;
        if (s == "SA")
            poker[4][1]++;
        if (s == "D2")
            poker[1][2]++;
        if (s == "C2")
            poker[2][2]++;
        if (s == "H2")
            poker[3][2]++;
        if (s == "S2")
            poker[4][2]++;
        if (s == "D3")
            poker[1][3]++;
        if (s == "C3")
            poker[2][3]++;
        if (s == "H3")
            poker[3][3]++;
        if (s == "S3")
            poker[4][3]++;
        if (s == "D4")
            poker[1][4]++;
        if (s == "C4")
            poker[2][4]++;
        if (s == "H4")
            poker[3][4]++;
        if (s == "S4")
            poker[4][4]++;
        if (s == "D5")
            poker[1][5]++;
        if (s == "C5")
            poker[2][5]++;
        if (s == "H5")
            poker[3][5]++;
        if (s == "S5")
            poker[4][5]++;
        if (s == "D6")
            poker[1][6]++;
        if (s == "C6")
            poker[2][6]++;
        if (s == "H6")
            poker[3][6]++;
        if (s == "S6")
            poker[4][6]++;
        if (s == "D7")
            poker[1][7]++;
        if (s == "C7")
            poker[2][7]++;
        if (s == "H7")
            poker[3][7]++;
        if (s == "S7")
            poker[4][7]++;
        if (s == "D8")
            poker[1][8]++;
        if (s == "C8")
            poker[2][8]++;
        if (s == "H8")
            poker[3][8]++;
        if (s == "S8")
            poker[4][8]++;
        if (s == "D9")
            poker[1][9]++;
        if (s == "C9")
            poker[2][9]++;
        if (s == "H9")
            poker[3][9]++;
        if (s == "S9")
            poker[4][9]++;
        if (s == "DT")
            poker[1][10]++;
        if (s == "CT")
            poker[2][10]++;
        if (s == "HT")
            poker[3][10]++;
        if (s == "ST")
            poker[4][10]++;
        if (s == "DJ")
            poker[1][11]++;
        if (s == "CJ")
            poker[2][11]++;
        if (s == "HJ")
            poker[3][11]++;
        if (s == "SJ")
            poker[4][11]++;
        if (s == "DQ")
            poker[1][12]++;
        if (s == "CQ")
            poker[2][12]++;
        if (s == "HQ")
            poker[3][12]++;
        if (s == "SQ")
            poker[4][12]++;
        if (s == "DK")
            poker[1][13]++;
        if (s == "CK")
            poker[2][13]++;
        if (s == "HK")
            poker[3][13]++;
        if (s == "SK")
            poker[4][13]++;
    }
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 13; j++) {
            if (poker[i][j] == 0) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}