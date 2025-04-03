#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char s[200002];
    int i = 0, v = 1, a, z;
    scanf("%s", s);
    while(1) {
        if(v && s[i] == 'A') {
            a = i;
            v = 0;
        } else if (s[i] == 'Z') {
            z = i;
        }

        if (s[i] == '\0') {
            break;
        }
        i++;

    }

    printf("%d \n", (z-a) + 1);
    return 0;
}