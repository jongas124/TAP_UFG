#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int digits[5];
    int a, b, p, r = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        p = i;
        for (int j = 0; j < 5; j++) {
            digits[j] = p%10;
            p = (int) ((p - (p%10))/10);
        }
        if (digits[0] == digits[4] && digits[1] == digits[3]) {
            r++;
        }
    }
    printf("%d\n", r);
    return 0;
}