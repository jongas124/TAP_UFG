#include <bits/stdc++.h>
using namespace std;

struct disjointSets {
    vector<int> pai, rank, filho_max, filho_min, n_elem;

    disjointSets (int n) {
        pai.resize(n + 1);
        n_elem.resize(n + 1, 1);
        rank.resize(n + 1, 0);

        for (int i = 0; i <= n; i++) {
            pai[i] = i;

        }
    }

    int find(int u) {
        if (u != pai[u]) {
            pai[u] = find(pai[u]);
        }
        return pai[u];
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
            if (rank[x] == rank[y]) {
                rank[x]++;
            }
        } else {
            pai[x] = y;
            if (x != y) {
                n_elem[y] += n_elem[x];
            }
        }
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, op1, op2, max_filhos = 0;
    cin >> n >> m;
    disjointSets dj(n);
    for (int i = 0; i < m; i++) {
        cin >> op1 >> op2;
        dj.merge(op1, op2);
    }
    for (int i = 1; i <= n; i++) {
        if (max_filhos < dj.find_n_elem(i)) {
            max_filhos = dj.find_n_elem(i);
        }
    }
    cout << max_filhos << '\n';

    return 0;
}