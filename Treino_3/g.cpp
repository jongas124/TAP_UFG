#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r;
    scanf("%d", &n);
    for (int i = 0; i < 8; i++) {
        if (pow(2, i) == n) {
            r = pow(2, i);
            goto a;
        } else if (pow(2, i) > n) {
            r = pow(2, i - 1);
            goto a;
        }
    }
    a:
    printf("%d\n", r);
    return 0;    
}