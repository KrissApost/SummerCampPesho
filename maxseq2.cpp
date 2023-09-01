#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> d(n + 1);
    for(int i = 0; i < k; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        d[i] = -1;
    }
    for(int i = 1; i <= n; i++){
        for(int y = 0; y < k; y++){
            if(i >= v[y] && d[i-v[y]] != -1){
                d[i] = max(d[i], d[i-v[y]]+1);
            }
        }

    }
    cout << d[n];

    return 0;
}
