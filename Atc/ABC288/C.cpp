#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n,vector<int>());
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        u--;v--;
        /*一つ目のインデックスで各頂点（連結を持つ）を表し、
        二つ目のインデックスの中身がつながってる頂点を表す*/
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<bool>used(n);
    int s=0;//グラフの連結成分の数
    #ifdef DEBUG
    cout<<"graph"<<endl;
    for(int i=0;i<n;++i){
        cout<<"i="<<i<<endl;
        for(int j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    #endif
    for(int i=0;i<n;++i){//頂点なめる
        if(!used[i]){
            s++;
            queue<int>que;
            que.push(i);
            while(!que.empty()){//連結している頂点がなくなるか、連結している頂点がすでに通過済みのものだけになるまでループ
                int q=que.front();que.pop();
                #ifdef DEBUG
                cout<<"q="<<q<<endl;
                #endif
                for(int v:graph[q]){//現在調べている頂点と連結している頂点に対して一通り処理する
                    if(!used[v]){
                        used[v]=true;
                        #ifdef DEBUG 
                        cout<<"v"<<v; 
                        #endif
                        que.push(v);//後で調べる頂点に追加
                    }
                }
            }
        }
        #ifdef DEBUG
        for(bool a:used){cout<<a<<" ";}
        cout<<endl;
        #endif
    }
    cout<<m-n+s<<'\n';
    return 0;
}