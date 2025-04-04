#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char s[4][10];
    int c = 0, v1 = 0, v2 = 0, v3 = 0, v4 = 0;
    scanf(" %s %s %s %s", s[0], s[1], s[2], s[3]);
    for(int i = 0; i < 4; i++) {
        if (s[i][0] == 'H' && s[i][1] == '\0' && v1 == 0) {
            c++;
            v1 = 1;
        }
        if (s[i][0] == '2' && s[i][1] == 'B' && s[i][2] == '\0' && v2 == 0) {
            c++;
            v2 = 1;
        }
        if (s[i][0] == '3' && s[i][1] == 'B' && s[i][2] == '\0' && v3 == 0) {
            c++;
            v3 = 1;
        }
        if (s[i][0] == 'H' && s[i][1] == 'R' && s[i][2] == '\0' && v4 == 0) {
            c++;
            v4 = 1;
        }
    }
    if (c == 4) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;    
}