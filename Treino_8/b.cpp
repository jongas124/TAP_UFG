#include <bits/stdc++.h>
using namespace std;

struct disjointSets {
    vector<int> pai, rank, filho_max, filho_min, n_elem;

    disjointSets (int n) {
        pai.resize(n + 1);
        filho_max.resize(n + 1);
        filho_min.resize(n + 1);
        n_elem.resize(n + 1, 1);
        rank.resize(n + 1, 0);

        for (int i = 0; i <= n; i++) {
            pai[i] = i;
            filho_max[i] = i;
            filho_min[i] = i;
        }
    }

    int find(int u) {
        if (u != pai[u]) {
            pai[u] = find(pai[u]);
        }
        return pai[u];
    }

    int find_max(int u) {
        return filho_max[u];
    }

    int find_min(int u) {
        return filho_min[u];
    }

    int find_n_elem(int u) {
        return n_elem[u];
    }

    void merge(int x, int y) {
        x = find(x), y = find(y);
        if (rank[x] >= rank[y]) {
            pai[y] = x;
            if (x != y) {
                n_elem[x] += n_elem[y];
            }
            if (filho_max[y] > filho_max[x]) {
                filho_max[x] = filho_max[y];
            }
            if (filho_min[y] < filho_min[x]) {
                filho_min[x] = filho_min[y];
            }
            if (rank[x] == rank[y]) {
                rank[x]++;
            }
        } else {
            pai[x] = y;
            if (x != y) {
                n_elem[y] += n_elem[x];
            }
            if (filho_max[y] < filho_max[x]) {
                filho_max[y] = filho_max[x];
            }
            if (filho_min[y] > filho_min[x]) {
                filho_min[y] = filho_min[x];
            }
        }
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, op1, op2, pai;
    string s;
    cin >> n >> m;
    disjointSets dj(n);
    for (int i = 0; i < m; i++) {
        cin >> s >> op1;
        if (s[0] == 'u') {
            cin >> op2;
            dj.merge(op1, op2);
        } else {
            pai = dj.find(op1);
            cout << dj.find_min(pai) << ' ' << dj.find_max(pai) << ' ' << dj.find_n_elem(pai) << '\n';
        }
    }
    return 0;
}