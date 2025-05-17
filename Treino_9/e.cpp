#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int b, pb = 0;
    cin >> b;
    while (b > 0) {
        b -= pow(2, floor(log2(b)));
        pb++;
    }
    cout << pb << '\n';

    return 0;
}