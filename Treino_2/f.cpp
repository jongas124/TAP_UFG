#include <bits/stdc++.h>
using namespace std;

int distance(int a, int b, int c, int d);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    for (int i = x1 - 3; i < x1 + 4; i++) {
        for (int j = y1 - 3; j < y1 + 4; j++) {
            if (distance(i, j, x1, y1) == 5 && distance(i, j, x2, y2) == 5) {
                printf("Yes\n");
                goto a;
            }
        }
    }
    printf("No\n");
    a:
    return 0;
}

int distance(int a, int b, int c, int d) {
    return (pow((a-c), 2) + pow((b-d), 2));
}