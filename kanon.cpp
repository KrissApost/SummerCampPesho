#include <bits/stdc++.h>
using namespace std;
bool er[5000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int mm = sqrt(5000000);
    for(int i = 2; i <= mm; i++){
        if(!er[i]) for(int y = i*i; y <= 5000000; y+=i) if(!er[y]) er[y] = true;
    }
    vector<int> pr;
    for(int i = 1; i <= 5000000; i++){
        if(!er[i]){
            pr.push_back(i);
        }
    }
    int n;
    cin >> n;
    int r = n;
    vector<int> v;
    for(int i = 1; i < pr.size(); i++){
        int k = pr[i];
        while(r != 1 && r % k == 0){
            r /= k;
            v.push_back(k);
            if(!er[r]){
                v.push_back(r);
                r = 1;
                break;
            }
        }
        if(r == 1) break;
        if(!er[r]){
            v.push_back(r);
            break;
        }
    }
    int arr[10] = {};
    for(int i = 0; i < v.size(); i++){
        arr[v[i]]++;
    }
    long long s = 1;
    for(int i = 2; i <= v.size(); i++){
        s *= i;
    }
    for(int i = 1; i < 10; i++){
        long long k = 1;
        for(int j = 2; j <= arr[i]; j++){
            k *= j;
        }
        s/=k;
    }
    cout << s;

    return 0;

}
