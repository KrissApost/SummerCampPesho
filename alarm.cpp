#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int a, b, a1, b1, n;
    cin >> a >> b;
    cin >> a1 >> b1;
    cin >> n;
    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    cout << min(ans, ans1);

    return 0;
}
