#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long k = 0;
    for(long long i = 0; i <= 2 * n; i++){
        long long x;
        cin >> x;
        k = (k ^ x);
    }
    cout << k;

    return 0;

}
