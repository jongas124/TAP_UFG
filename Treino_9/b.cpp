#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, in;
    vector<bool> crv(2002, 0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> in;
        crv[in] = true;
    }

    for (int i = 0; i < 2002; i++) {
        if (!crv[i]) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}