#include <bits/stdc++.h>
using namespace std;
bool er[100];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mm = sqrt(1000);
    for(int i = 2; i <= mm; i++){
        if(!er[i]) for(int y = i*i; y <= 1000; y+=i) if(!er[y]) er[y] = true;
    }
    vector<int> pr;
    for(int i = 1; i <= 1000; i++){
        if(!er[i]){
            pr.push_back(i);
        }
    }
    int n, k;
    cin >> n >> k;
    map<int,int> br;
    for(int i = n-k+1; i <= n; i++){
        int r = i;
        for(int j = 0; j < pr.size(); j++){
            int h = pr[j];
            while(r % h == 0){
                br[h]++;
                r/=h;
            }
            if(i == 1) break;
            if(!er[r]){
                br[r]++;
                break;
            }
        }
    }
    for(int i = 2; i <= k; i++){
        int r = i;
        for(int j = 0; j < pr.size(); j++){
            int h = pr[j];
            while(r % h == 0){
                br[h]--;
                r/=h;
            }
            if(i == 1) break;
            if(!er[r]){
                br[r]--;
                break;
            }
        }
    }
    long long s = 1;
    for(auto p: br){
        cout << p.first << " " << p.second << endl;
        //s *= pow(p.first,p.second);
    }
    cout << s;
    return 0;
}
