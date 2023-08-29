#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(),s1.end());
    map<string,bool> br;
    int n = s1.size();
    int ans = 0;
    do{
        for(int i = 0; i < pow(2,n); i++){
            string ss;
            int x = i;
            for(int j = 0; j < n; j++){
                if(x%2 == 0){
                    ss.push_back(s1[j]);
                }
                x /= 2;
            }
            if(br[ss]){
                continue;
            }
            br[ss] = true;
            if(ss.size() < s2.size()){
                continue;
            }
            for(int j = 0; j <= ss.size() - s2.size(); j++){
                if(s2 == ss.substr(j,s2.size())){
                    ans++;
                }
            }
        }
    }while(next_permutation(s1.begin(), s1.end()));
    cout << ans;

    return 0;
}
