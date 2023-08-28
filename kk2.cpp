#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long n;
    cin >> n;
    n *= 2;
    long long ans = 1;
    for(long long i = n; i > 0; i--){
        ans = ans * i;
    }
    for(long long i = 0; i < n / 2; i++){
        ans /= 2;
    }
    cout << ans;

    return 0;
}
