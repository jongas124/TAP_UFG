#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int digits[5];
    int n, a, b, p, sum = 0, dsum = 0;
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i <= n; i++) {
        p = i;
        for (int j = 0; j < 5; j++) {
            digits[j] = p%10;
            p = (int) ((p - (p%10))/10);
            sum += digits[j];
        }
        if (sum >= a && sum <=b) {
            dsum += digits[0];
            dsum += digits[1] * 10;
            dsum += digits[2] * 100;
            dsum += digits[3] * 1000;
            dsum += digits[4] * 10000;
        }
        sum = 0;
    }
    printf("%d\n", dsum);
    return 0;
}