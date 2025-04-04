#include <bits/stdc++.h>
using namespace std;

int findP(vector<int> v, int num, int tam);

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p, t;
    scanf(" %d", &n);
    vector<vector<int>> nv(n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        nv[i].push_back(t);
        nv[i].push_back(i);
    }

    sort(nv.begin(), nv.end());

    for (int i = 0; i < n; i++) {
        printf("%d ", nv[i].at(1)+1);
    }
    
    printf("\n");
    return 0;
}