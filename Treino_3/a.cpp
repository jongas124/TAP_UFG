#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double n, mod;
    scanf("%lf", &n);
    mod = fmod(n, 1.0);
    int modv = (int)(mod*10);
    if (modv <= 2) {
        printf("%d-\n", (int)(n-mod));
    }
    if (modv >= 3 && modv <= 6) {
        printf("%d\n", (int)(n-mod));
    } 
    if(modv >= 7) {
        printf("%d+\n", (int)(n-mod));

    }
    return 0;    
}