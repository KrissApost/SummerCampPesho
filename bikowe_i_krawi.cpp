#include <bits/stdc++.h>
using namespace std;
int bik(int a, int b){
    int k = 0;
    for(int i = 0; i < 4; i++){
        if(a % 10 == b % 10){
            k++;
        }
        a /= 10;
        b /= 10;
    }
    return k;
}
int krawi(int a, int b){
    int arr[10] = {};
    int k = 0;
    k-=bik(a,b);
    for(int i = 0; i < 4; i++){
        arr[a%10]++;
        arr[b%10]++;
        a /= 10;
        b /= 10;
    }
    for(int i = 0; i < 10; i++){
        if(arr[i] == 2){
            k++;
        }
    }
    return k;
}
int main() {
    vector<int> v;
    for (int i1=1;i1<10;i1++){
        for (int i2=1;i2<10;i2++){
            if (i1 == i2) continue;
            for (int i3=1;i3<10;i3++){
                if (i1 == i3 || i2 == i3) continue;
                for (int i4=1;i4<10;i4++){
                    if(i1 == i4 || i2 == i4 || i3 == i4) continue;
                    v.push_back(i1*1000+i2*100+i3*10+i4);
                }
            }
        }
    }
    int b, k, x = v[0];
    while(b != 4 || k != 0){
        x = v[0];
        cout << "mislq 4e e " << x << endl;
        cin >> b >> k;
        vector<int> vec;
        for(int i = 1; i < v.size(); i++){
            if(b == bik(x,v[i]) && k == krawi(x,v[i])){
                vec.push_back(v[i]);
            }
        }
        v = vec;
    }
    return 0;
}
