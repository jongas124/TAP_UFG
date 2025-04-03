#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N = 0, r = 0, m = 1;
    char c[11];
    int i = 0;
    while(1) {
        scanf("%c", &c[i]);
        if(c[i] > 57 || c[i] < 48) {
            break;
        }
        r += (c[i] - 48);
        i++;
    }
    c[i] = '\0';
    N = atoi(c);

    if (N%r == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");        
    }
    return 0;
}