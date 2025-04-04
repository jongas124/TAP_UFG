#include <bits/stdc++.h>
using namespace std;

int distance(int bl, int bc, int wl, int wc, int power);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c, bombs[3][441], walls[2][441], n_bombs = 0, n_walls = 0;
    char m[21][21];
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf(" %c", &m[i][j]);
            if(m[i][j] == '#') {
                walls[0][n_walls] = i;
                walls[1][n_walls] = j;
                n_walls++;
            }
            if(m[i][j] > 48 && m[i][j] < 58) {
                bombs[0][n_bombs] = i;
                bombs[1][n_bombs] = j;
                bombs[2][n_bombs] = (int) m[i][j] - 48;
                n_bombs++;
            }
        }
    }

    for (int i = 0; i < n_walls; i++) {
        for (int j = 0; j < n_bombs; j++) {
            if (distance(bombs[0][j], bombs[1][j], walls[0][i], walls[1][i], bombs[2][j])) {
                m[walls[0][i]][walls[1][i]] = '.';
            }
        }
    }

    for (int i = 0; i < n_bombs; i++) {
        m[bombs[0][i]][bombs[1][i]] = '.';
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%c", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int distance(int bl, int bc, int wl, int wc, int power) {
    int r, dist = abs(bl - wl) + abs(bc - wc);
    if (dist > power) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}