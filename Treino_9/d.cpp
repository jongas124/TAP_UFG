#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long unsigned a, b, n, t, fn;
    cin >> t;
    for (long long unsigned i = 0; i < t; i++) {
        cin >> a >> b >> n;
        if (n%3 == 0) {
            fn = a;
        }
        if (n%3 == 1) {
            fn = b;
        }
        if (n%3 == 2) {
            fn = a ^ b;
        }
        cout << fn << '\n';
    }

    return 0;
}