#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(m);
    for(int i=0;i<m;++i){
        int len;
        cin>>len;
        v[i].resize(len);
        for(int j=0;j<len;++j){
            cin>>v[i][j];
        }
    }
    bitset<1024>b(0);
    cout<<b;
    for(int i=1;i<=n;++i){
     
        
    }
}
