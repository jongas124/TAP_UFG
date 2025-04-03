#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char s[100001], t[100001];
    int i = 0, base, actual;
    scanf("%s %s", s, t);
    base = t[i] - s[i];
    if (base < 0) {
        base += 26;
    }
    while (s[i] != '\0') {
        actual = t[i] - s[i];
        if (actual < 0) {
            actual += 26;
        }
        if (base != actual) {
            printf("No\n");
            goto a;
        }
        i++;
    }

    printf("Yes\n");
    a:
    return 0;
}