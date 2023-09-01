#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
long long n, q;
vector<int> v;
long long bs(long long s){
    int l = 0, r = n-1, ans = n;
    while(l <= r){
        int m = (l+r)/2;
        //cout << m << " " << v[m] << endl;
        if(v[m] < s){
            l = m + 1;
        }
        if(v[m] >= s){
            ans = min(ans,m);
            r = m-1;
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    long long a;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < q; i++){
        cin >> a;
        cout << bs(a)<< endl;
    }

    return 0;
}
