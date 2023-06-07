#include<bits/stdc++.h>
using namespace std;
struct UnionFind
{
    vector<int>par;//par[i]はiの根を表す
    UnionFind(int n):par(n){
        for(int i=0;i<n;++i)par[i]=i;//何も連結していない状態として初期化(自分の根は自分自身)
    }
    int root(int x){
        if(par[x]==x){//根にたどり着いたか
            return x;
        }
        else return root(par[x]);
    }
    void unite(int x,int y){
        int rootx=root(x);
        int rooty=root(y);
        if(rootx==rooty)return;//根が同じならなにもしない
        par[rootx]=rooty;//        
    }
    bool same(int x,int y){
        return root(x)==root(y);
    }
};

int main(){
    int n;
    cin>>n;
    UnionFind graph(n+1);
    int m;
    cin>>m;
    for(int i=0;i<m;++i){
        int v1,v2;
        cin>>v1>>v2;
        graph.unite(v1,v2);
    }
    int k;
    cin>>k;
    set<pair<int,int>>badLine;
    for(int i=0;i<k;++i){
        int x,y;
        cin>>x>>y;
        int rootx=graph.root(x);
        int rooty=graph.root(y);
        badLine.emplace(make_pair(min(rootx,rooty),max(rootx,rooty)));
    }
    int q;
    cin>>q;
    for(int i=0;i<q;++i){
        int x,y;
        cin>>x>>y;
        int targetx=graph.root(x);
        int targety=graph.root(y);
        pair<int,int>target(min(targetx,targety),max(targetx,targety));
        if(badLine.count(target)==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
