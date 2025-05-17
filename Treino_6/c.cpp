#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool> bitsa(8), bitsb(8), bitsc(8);
    int a, b, pot, c = 0;
    cin >> a >> b;
    for (int i = 2; i >= 0; i--) {
        pot = pow(2, i);
        if (pot <= a) {
            a-= pot;
            bitsa[i] = true;
        }
        if (pot <= b) {
            b -= pot;
            bitsb[i] = true;
        }
    }
    for (int i = 2; i >= 0; i--) {
        if (bitsa[i] == false && bitsb[i] == false) {
            bitsc[i] = false;
        } else {
            c += pow(2,i);
        }
    }
    cout << c << '\n';

    return 0;
}