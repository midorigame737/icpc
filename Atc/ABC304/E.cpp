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
    int n,m;
    cin>>n>>m;
    UnionFind graph(n+1);
    for(int i=0;i<m;++i){
        int x,y;
        cin>>x>>y;
        graph.unite(x,y);
    }
    int k;
    cin>>k;
    set<pair<int,int>>badLine;
    for(int i=0;i<k;++i){
        int x,y;
        cin>>x>>y;
        badLine.insert({min(x,y),max(x,y)});
    }
    int q;
    cin>>q;
    for(int i=0;i<q;++i){
        int p,q;
        cin>>p>>q;
        UnionFind g2=graph;
        g2.unite(p,q);
        bool flag=true;
        for(auto it=badLine.begin();it!=badLine.end();++it){
            if(g2.same(it->first,it->second)){
                cout<<"No"<<endl;
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
