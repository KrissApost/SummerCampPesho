#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        arr[a[i]] = 1;
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
        arr[b[i]]++;
    }
    int k = 0;
    for(int i = 0; i < n; i++){
        if(arr[a[i]] == 2){
            k++;
        }
    }
    cout << k;
    return 0;

}
