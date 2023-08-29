#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<pair<string,string>,int> br;
    string a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        br[{a,b}]++;
    }
    for(auto p: br){
        if(p.second)
    }
    return 0;

}
