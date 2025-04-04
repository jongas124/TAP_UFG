#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, r;
    scanf("%d %d", &a, &b);
    r = ceil((double)(b-1)/(double)(a-1));
    printf("%d\n", r);
    return 0;    
}