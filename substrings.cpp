#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    long long ans = 1;
    for(int i = 2; i <= n; i++){
        ans *= i;
    }

    return ans;
}
int C(int k, int n){
    int ans = 1;
    for(long long i = 1; i <= k; i++){
        ans *= (n-i+1);
        ans /= i;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    int k = 1;
    int n = 1 + s1.size() - s2.size();
    for(int i = 2; i <= n; i++){
        int r = C(i - 1, n - 1);
        k += fact(r+1);
    }
    cout << k;
    return 0;

}

