#include <bits/stdc++.h>
using namespace std;
int st[100000];
void dfs(int idx,int tl, int tr){
    if(tr == tl){
        st[idx] = a[tl];
        return;
    }
    int tm = (tl+tr)/2;
    dfs(2*idx,tl,tm);
    dfs(2*idx+1,tm+1,tl);
    st[idx] = min(st[2*idx],st[2*idx+1]);
}
int mini(int idx,int tl, int tr, int ql, int qr){
    if(tl>qr||tr<qr){
        return INT_MAX;
    }
    if(ql<=tl&&tr<=qr){
        return st[idx];
    }
    int tm = (tl+tr)/2;
    int k = mini(2*idx,tl,tm,ql,qr);
    int k1 = mini(2*idx + 1,tm+1,tr,ql,qr);
    return min(k,k1);
}
void change(int idx, int tl, int tr, int pos, int x){
    if(tl == tr){
        if(tl == pos){
            st[tl] = x;
        }
        return;
    }
    if(tr<pos || tl > pos){
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;


    return 0;

}
