#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
vector<int> g[100001];
int t[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, c, k;
    cin >> n >> m >> c >> k;
    int x, y;
    for(int j = 0; j < m; j++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    queue<int> q;
    q.push(c);
    t[c] = 1;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i = 0; i < g[s].size(); i++){
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
