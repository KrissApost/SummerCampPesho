#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
char table[1000][1000];
int times[1000][1000];
int pat[1000][1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    pair<int, int> start;
    pair<int, int> finish;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> table[i][j];
            if(table[i][j] == 'S')
            {
                start.first = i;
                start.second = j;
            }
            if(table[i][j] == 'T')
            {
                finish.first = i;
                finish.second = j;
            }
        }
    }
    queue<pair<int, int>> q;
    vector<pair<int, int>> dirs;
    dirs.push_back({0, 1});
    dirs.push_back({0, -1});
    dirs.push_back({1, 0});
    dirs.push_back({-1, 0});
    q.push(start);
    times[start.first][start.second] = 1;
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
    cout << times[finish.first][finish.second] - 1 << ' ' << pat[finish.first][finish.second] << endl;
    return 0;
}
