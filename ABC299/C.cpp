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
    int ans=0;
    for(int b=0;b<(1<<m);b++){
        set<int>s;
        for(int i=0;i<m;++i){
            if((b>>i)&1){
                for(auto& x:v[i])s.insert(x);
            }
        }
        ans+=(int)s.size()==n;
    }
    cout<<ans<<"\n";
}
