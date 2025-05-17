#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int ck[4], sc = 0, sr = 0, s;
    for (int i = 0; i < 4; i++) {
        cin >> ck[i];
    }
    s = 15;
    while(s != 0) {
        s = (s - 1) & 15;
        bitset<4> bs(s);
        for (int i = 0; i < 4; i++) {
            if(bs[i]) {
                sc += ck[i];
            } else {
                sr += ck[i];
            }
        }
        if (sc == sr) {
            cout << "Yes\n";
            goto a;
        }
        sc = 0;
        sr = 0;
    }
    cout << "No\n";
    a:
    return 0;
}