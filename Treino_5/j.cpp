#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, x, temp, soma = 0, count = 0;
    cin >> n >> x;
    unordered_map<long long, long long> hash;
    hash[soma]++;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        soma += temp;
        if(hash.count(soma - x)) {
            count += hash[soma - x];
        }
        hash[soma]++;
    }
    cout << count << '\n';
    return 0;
}