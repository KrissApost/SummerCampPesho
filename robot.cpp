#include<bits/stdc++.h>
using namespace std;
long long m[21][43][43];
long long dp(long long k, long long i, long long j) {
    if (k == 0 && i == 0 && j == 0) return 1;
    if (abs(i)+abs(j) > k || (abs(i)+abs(j))%2 != k%2) return 0;
    if (m[k-1][i+22][j+21] == 0) {
        m[k-1][i+22][j+21] = dp(k-1, i+1, j);
    }
    if (m[k-1][i+21][j+22] == 0) {
        m[k-1][i+21][j+22] = dp(k-1, i, j+1);
    }
    if (m[k-1][i+20][j+21] == 0) {
        m[k-1][i+20][j+21] = dp(k-1, i-1, j);
    }
    if (m[k-1][i+21][j+20] == 0) {
        m[k-1][i+21][j+20] = dp(k-1, i, j-1);
    }
    return m[k-1][i+22][j+21] + m[k-1][i+21][j+22] + m[k-1][i+20][j+21] + m[k-1][i+21][j+20];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long k, i, j;
    cin >> k >> i >> j;
    cout << dp(k, i, j);
    return 0;
}
