#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, r;
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c) {
        r = (a*10) + b + c;
        goto a;
    }
    if (b >= a && b >= c) {
        r = (b*10) + a + c;
        goto a;
    }
    if (c >= b && c >= a) {
        r = (c*10) + b + a;
        goto a;
    }

    a:
    printf("%d\n", r);
    return 0;
}