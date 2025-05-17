#include <bits/stdc++.h>
using namespace std;

struct disjointSets {
    vector<int> pai;
    vector<int> rank;
    disjointSets (int n) {
        pai.resize(n + 1);
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

    void merge(int x, int y) {
        x = find(x), y = find(y);
        if (rank[x] >= rank[y]) {
            pai[y] = x;
            if (rank[x] == rank[y]) {
                rank[x]++;
            }
        } else {
            pai[x] = y;
        }
    }
};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, op1, op2;
    string s;
    cin >> n >> m;
    disjointSets dj(n);
    for (int i = 0; i < m; i++) {
        cin >> s >> op1 >> op2;
        if (s[0] == 'u') {
            dj.merge(op1, op2);
        } else {
            if (dj.find(op1) == dj.find(op2)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}