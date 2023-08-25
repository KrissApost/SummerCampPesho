#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int time[n][m];
    int ans[n][m];
    pair<int,int> s, t;
    vector<pair<int,int>> p = {{-1,0},{1,0},{0,-1},{0,1}};
    char arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'S') s = {i,j};
            if(arr[i][j] == 'T') t = {i,j};
            time[i][j] = -1;
            ans[i][j] = 0;
        }
    }
    queue<pair<int, int>> q;
    int r = m * n, ma = 0;
    q.push(s);
    int k = 0;
    time[s.first][s.second] = 0;
    while(!q.empty())
    {
        pair<int, int> u = q.front();
        q.pop();
        int x, y;
        for(int i = 0; i < 4; i++)
        {
            x = u.first + dirs[i].first;
            y = u.second + dirs[i].second;
            if(x < 0 || x >= a || y < 0 || y >= b) continue;
            if(table[x][y] == 'x') continue;
            if(times[x][y] == times[u.first][u.second] + 1)
            {
                pat[x][y] = max(pat[x][y], pat[u.first][u.second] + (table[x][y] == '+'));
                continue;
            }
            if(table[x][y] == 'Q') continue;
            if(times[x][y] == 0)
            {
                times[x][y] = times[u.first][u.second] + 1;
                if(table[x][y] == '+')
                {
                    pat[x][y] = pat[u.first][u.second] + 1;
                }
                else
                {
                    pat[x][y] = pat[u.first][u.second];
                }
                q.push({x, y});
            }
            table[x][y] = 'Q';
        }
    }
    cout << time[t.first][t.second] + 1 << " " << ans[t.first][t.second];

    return 0;
}
