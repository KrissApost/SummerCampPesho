#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[100000] = {};
    int n, q;
    cin >> n >> q;
    set<int> s;
    int x;
    cin >> x;
    s.insert(x);
    for (int i = 1; i < n; i++) {
        cin >> x;
        int mn = 1000000007;
        auto it = s.lower_bound(x);
        if (it != s.end()) mn = min(mn,(*it)-x);
        if (it != s.begin()){
            it--;
            mn = min(mn,x-(*it));
        }
        if (i > 1) mn = min(mn,arr[i - 1]);
        arr[i] = mn;
        s.insert(x);
    }
    for (int i = 0; i < q; i++) {
        int z;
        cin >> z;
        cout << arr[z - 1] << " ";
    }

    return 0;

}
