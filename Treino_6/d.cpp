#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long unsigned n, s;
    vector<long long unsigned> resp(1<<15);
    cin >> n;
    s = n;
    resp[0] = n;
    int i = 1;
    while(s != 0) {
        s = (s - 1) & n;
        resp[i] = s;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << resp[j] << '\n';
    }
    return 0;
}