#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int t[3000][3000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    queue<pair<int,int>> q;
    for(int j = 0; j < k; j++){
        cin >> x >> y;
        q.push_back({x,y});
    }
    while(!q.empty()){
        pair<int,int> s = q.front();
        t[s.first][s.second] = 1;
        q.pop();
        for(auto p1){
            if(t[g[s][i]]) continue;
            t[g[s][i]] = t[s] + 1;
            q.push(g[s][i]);
        }
    }
    int p = 0;
    for(int i = 1; i <= n; i++){
        if(t[i] - 1 > k){
            p++;
        }
    }
    cout << p << endl;
    for(int i = 1; i <= n; i++){
        if(t[i] - 1 > k){
            cout << i << endl;
        }
    }

    return 0;
}
