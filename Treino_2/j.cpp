#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int *p1, int *p2, int *p3);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int points[301][2], n, triangles = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i][0], &points[i][1]);
    }
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (isTriangle(points[i], points[j], points[k])) {
                    triangles++;
                }
            }
        }
    }
    printf("%d\n", triangles);

    return 0;
}

bool isTriangle(int *p1, int *p2, int *p3) {
    int area = (p1[0]*(p2[1] - p3[1])) + (p2[0]*(p3[1] - p1[1])) + (p3[0]*(p1[1] - p2[1]));
    return area != 0;
}