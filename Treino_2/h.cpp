#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, power, min = 1002, diff, p;
    scanf ("%d", &x);
    for (int i = 0; i < 33; i ++) {
        for (int j = 2; j < 10; j++){
            p = pow(i, j);
            if (p > x) {
                break;
            }
            diff = abs(x - p);
            if (min > diff) {
                min = diff;
                power = p;
            }
        }
    }
    printf("%d\n", power);
    return 0;
}
