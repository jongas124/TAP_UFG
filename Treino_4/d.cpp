#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p[200002], min = 200004, r = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        if(p[i] < min) {
            r++;
            min = p[i];
        }
    }
    printf("%d\n", r);
    return 0;
}