#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long unsigned n, log = 0;
    int nlog = 0;
    cin >> n;
    while(1) {
        log = pow(2, nlog);
        if (log > n) {
            cout << (nlog - 1) << '\n';
            goto a;
        }
        nlog++;
    }
    a:
    return 0;
}