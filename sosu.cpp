#include<bits/stdc++.h>
using namespace std;
int main(){//オーダーがsqrt(n)の素数判定
    int n;
    cin>>n;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            cout<<n<<"は素数ではありません";
            return 0;
        }
    }
    cout<<n<<"は素数です";
    return 0;
}