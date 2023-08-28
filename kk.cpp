#include<bits/stdc++.h>
using namespace std;
long long C(long long n, long long k){
    long long ans = 1;
    for(long long i = 1; i <= k; i++){
        ans *= (n - i + 1);
        ans /= i;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, a, b;
    cin >> n >> a >> b;
    long long k = 0;
    for(int i = a; i >= 0; i--){
        if(n - i > b || n - i < 2) continue;
        if(i < 3) continue;
        k = k + C(a,i) * C(b,n-i);
    }
    cout << k;

    return 0;
}
