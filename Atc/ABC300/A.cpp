#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v(n);
    for(int& a:v){
        cin>>a;
    }
    for(int i=0;i<n;++i){
        if(v[i]==a+b){
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}
