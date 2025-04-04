#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char s[100001];
    int p1b = 0, p1w = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if((i + 1)%2 == 0) {
            if (s[i] != '0') {
                p1w++;
            }
        } else {
            if (s[i] != '1') {
                p1w++;
            }
        }
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if((i + 1)%2 == 0) {
            if (s[i] != '1') {
                p1b++;
            }
        } else {
            if (s[i] != '0') {
                p1b++;
            }
        }
    }
    if (p1b < p1w) {
        printf("%d\n", p1b);
    } else {
        printf("%d\n", p1w);
    }
    return 0;
}