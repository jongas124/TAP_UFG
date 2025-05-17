#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m[4][7], v = 0, v2 = 0;
    string s;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            m[i][j] = -1;
        }
    }

    cin >> s;

    if (s[0] == '1') {
        cout << "No\n";
        goto a;
    }

    m[3][3] = s[0];
    m[2][2] = s[1];
    m[2][4] = s[2];
    m[1][1] = s[3];
    m[1][3] = s[4];
    m[1][5] = s[5];
    m[0][0] = s[6];
    m[0][2] = s[7];
    m[0][4] = s[8];
    m[0][6] = s[9];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (m[i][j] == '0') {
                for (int k = 0; k < 4; k++) {
                    if (m[k][j] == '1') {
                        v = 1;
                        break;
                    }
                }
                if (v == 0) {
                    for (int k = 0; k < j; k++) {
                        for (int l = 0; l < 4; l++) {
                            if (m[l][k] == '1') {
                                v2 = 1;
                                break;
                            }
                        }
                    }
                    if (v2 == 1) {
                        for (int k = j + 1; k < 7; k++) {
                            for (int l = 0; l < 4; l++) {
                                if (m[l][k] == '1') {
                                    cout << "Yes\n";
                                    goto a;
                                }
                            }
                        }
                    }
                    v2 = 0;
                }
                v = 0;
            }
        }
    }
    cout << "No\n";
    a:
    return 0;
}