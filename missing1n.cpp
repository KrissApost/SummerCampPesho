#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long k = 0;
    for(int i = 1; i <= n; i++){
        k += i;
    }
    for(long long i = 0; i < n - 1; i++){
        long long x;
        cin >> x;
        k -= x;
    }
    cout << k;

    return 0;

}
