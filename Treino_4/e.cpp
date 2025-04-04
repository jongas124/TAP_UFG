#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char s1[101], s2[102], i, j;
    scanf("%s %s", s1, s2);
    for (i = 0; s1[i] != '\0'; i++) {}
    for (j = 0; s2[j] != '\0'; j++) {}
    if (i > j) {
        printf("GREATER\n");
        goto fim;
    }
    if (i < j) {
        printf("LESS\n");
        goto fim;
    }
    for (int k = 0; k < i; k++) {
        if (s1[k] > s2[k]) {
            printf("GREATER\n");
            goto fim;
        }
        if (s1[k] < s2[k]) {
            printf("LESS\n");
            goto fim;
        }
    }
    printf("EQUAL\n");
    fim:
    return 0;
}