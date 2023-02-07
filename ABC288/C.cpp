#include<bits/stdc++.h>
using namespace std;
int n,m;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n,vector<int>());
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        u--;v--;
        graph[u].push_back(v);//一つ目のインデックスで各頂点（連結を持つ）を表し、二つ目のインデックスの中身がつながってる頂点を表す
        graph[v].push_back(u);
    }
    vector<bool>used(n);
    int s=0;//グラフの連結成分の数
    cout<<"graph"<<endl;
    for(int i=0;i<n;++i){
        cout<<"i="<<i<<endl;
        for(int j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;++i){//頂点なめる
        if(!used[i]){
            s++;
            queue<int>que;
            que.push(i);
            while(!que.empty()){
                int q=que.front();que.pop();
                cout<<"q="<<q<<endl;
                for(int v:graph[q]){
                    if(!used[v]){
                        used[v]=true;
                        cout<<"v"<<v;
                        que.push(v);
                    }
                }
            }
        }
    }
    cout<<m-n+s<<'\n';
    return 0;
}