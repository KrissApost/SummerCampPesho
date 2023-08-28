#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int c[1001][1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        c[i][0] = 1;
        cout << c[i][0] << " ";
        for(int j = 1; j <= i; j++){
            c[i][j] = c[i-1][j-1] + c[i-1][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
