#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
bool arr[100001];
long long a[100001], ans[100001];
long long f(long long n){
    if(n <= 0) return 0;
    if(arr[n]) return ans[n];
    arr[n] = true;
    long long k1 = f(n-2), k2 = f(n-3), k3 = f(n-4);

    ans[n] = max(max(k1,k2+a[n]),max(k3+a[n]+a[n-2],k3+a[n-1]));

    return ans[n];
}
int main() {
    long long n, s = 0;
    cin >> n;
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
        s += a[i] * 2;
    }
    cout << s + max(f(n),f(n-1));
    return 0;
}
