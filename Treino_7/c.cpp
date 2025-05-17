#include <bits/stdc++.h>
    using namespace std;

    int main () {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        string st;
        long long ops[4], s, opc[4];
        cin >> st;
        ops[0] = st[0] - '0';
        ops[1] = st[1] - '0';
        ops[2] = st[2] - '0';
        ops[3] = st[3] - '0'; 
        s = 7;
        do {
            bitset<3> bs(s);
            for (int i = 0; i < 4; i++) {
                opc[i] = ops[i];
            }
            for (int i = 0; i < 3; i++) {
                if(bs[i]) {
                    opc[i+1] *= -1;
                }
            }
            if ((opc[0] + opc[1] + opc[2] + opc[3]) == 7) {
                cout << ops[0];
                for (int j = 0; j < 3; j++) {
                    if (opc[j+1] < 0) {
                        cout << '-' << ops[j+1];
                    }else {
                        cout << '+' << ops[j+1];
                    }
                }
                cout << "=7\n";
                goto a;
            }
            s = (s - 1) & 7;
        } while(s != 7);

        a:
        return 0;
    }