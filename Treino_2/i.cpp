#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long a, b, i;
    scanf("%ld %ld", &a, &b);
    if (b > a) {
        a += b;
        b = a - b;
        a -= b;
    }
    for(i = a; i%b != 0; i += a){}
    printf("%ld\n", i);
    return 0;
}