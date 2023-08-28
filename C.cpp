#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    long long ans = 1;
    for(long long i = 1; i <= k; i++){
        ans *= (n-i+1);
        ans /= i;
    }
    cout << ans;

    return 0;
}
