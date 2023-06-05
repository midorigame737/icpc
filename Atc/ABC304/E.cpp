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

    return 0;
}
