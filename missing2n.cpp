#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    bitset<500000> b;
    int a1, a2;
    for(long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        if(b[x-1]){
            a2 = x;
        }else{
            b[x-1]=true;
        }
    }
    for(int i = 0; i < n; i++){
        if(!b[i]){
            a1 = i + 1;
        }
    }
    cout << a1 << " " << a2;

    return 0;

}
