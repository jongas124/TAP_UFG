#include <bits/stdc++.h>
using namespace std;

bool is_tak(char taka[][9]);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    char ma[101][101], tak[9][9];

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &ma[i][j]);
        }
    }

    for (int i = 0; i < (n - 8); i++) {
        for (int j = 0; j < (m - 8); j++) {
            for (int k = 0; k < 9; k++) {
                for (int l = 0; l < 9; l++) {
                    tak[k][l] = ma[i + k][j + l];
                }
            }
            if (is_tak(tak)) {
                printf("%d %d\n", i+1, j+1);
            }
        }
    }
    return 0;
}

bool is_tak(char taka[][9]) {
    char v[4][4] = {
        {'#', '#', '#', '.'},
        {'#', '#', '#', '.'},
        {'#', '#', '#', '.'},
        {'.', '.', '.', '.'}
    };

    char v2[4][4] = {
        {'.', '.', '.', '.'},
        {'.', '#', '#', '#'},
        {'.', '#', '#', '#'},
        {'.', '#', '#', '#'}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(taka[i][j] != v[i][j]) {
                return false;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(taka[i + 5][j + 5] != v2[i][j]) {
                return false;
            }
        }
    }

    return true;
}