#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char s[1001], t[1001];
    int max_si = -1, si = 0;
    scanf("%s%s", s, t);
    for (int i = 0; i <= (strlen(s) - strlen(t)); i++) {
        for (int j = 0; j < strlen(t); j++) {
            if (s[i + j] == t[j]) {
                si++;
            }
        }
        if (si > max_si) {
            max_si = si;
        }
        si = 0;
    }

    printf("%ld\n", strlen(t) - max_si);
    return 0;
}