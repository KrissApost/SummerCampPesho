#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int n, k;
int arr[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++){
        v[i] = -1;
    }
    for(int i = 1; i <= n; i++) {
        for(int y = 0; y < k; y++) {
            if(i >= arr[y] && v[i-arr[y]] != -1 ) {
                v[i] = max(v[i], v[i-arr[y]]+1);
            }
        }
    }
    cout << v[n];

    return 0;
}
