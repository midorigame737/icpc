#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<bool>edges;
vector<int>startp;
vector<int>endp;
bool check(int startp,int endp,int goal){
    int count=0;
    for(int i=0;i<n;++i){//頂点なめる
        for(int j=0;j<m;++j){//辺なめる
            if(startp[j]==i){
                count++;
            }
        }
    }
    if(count==0)return false;
    check()
}

    
int main(){
    int n,m;
    cin>>n>>m;
    edges.resize(n);
    startp.resize(m);
    endp.resize(m);
    for(int i=0;i<m;++i){
        int a,b;
        cin>>startp[i]>>endp[i];
    }
    for(int i=0;i<n;++i){//頂点なめる
        for(int j=0;j<m;++j){//辺なめる
            if(startp[j]==i){
                check(i,endp[i],i);
            }
        }
    }
    return 0;
}