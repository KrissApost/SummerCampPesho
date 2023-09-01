#include <bits/stdc++.h>
using namespace std;
long long st[400003],a[400003];
void dfs(long long idx,long long tl, long long tr){
    if(tr == tl){
        st[idx] = a[tl];
        return;
    }
    long long tm = (tl+tr)/2;
    dfs(2*idx,tl,tm);
    dfs(2*idx+1,tm+1,tr);
    st[idx] = min(st[2*idx],st[2*idx+1]);
}
long long mini(long long idx,long long tl, long long tr, long long ql, long long qr){
    if(tl>qr||tr<ql){
        return INT_MAX;
    }
    if(ql<=tl&&tr<=qr){
        return st[idx];
    }
    long long tm = (tl+tr)/2;
    long long k = mini(2*idx,tl,tm,ql,qr);
    long long k1 = mini(2*idx + 1,tm+1,tr,ql,qr);
    return min(k,k1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    for(long long i = 0; i < n; i++){
        char x;
        cin >> x;
        if(x == '(') a[i+1] = a[i]+1;
        else a[i+1] = a[i]-1;
    }
    dfs(1,1,n);
    long long q;
    cin >> q;
    for(long long i = 0; i < q; i++){
        long long l, r;
        cin >> l >> r;
        long long ans = mini(1,1,n,l,r);
        if(a[r]-a[l-1] == 0 && ans - a[l-1] >= 0) cout << 1 << "\n";
        else cout << 0 << "\n";
    }

    return 0;

}
