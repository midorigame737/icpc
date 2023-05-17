#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100
#define MAX_M 100
typedef pair<int,int> P;
const int INF=100000000;
vector<string>maze(m);
int sx,sy;//スタート座標
int gx,gy;//ゴール座標
int d[MAX_N][MAX_M];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int n,m;
int bfs(){
    queue<P>que;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            d[i][j]=INF;
        }
    }
    que.push(P(sx,sy));
    d[sx][sy]=0;
    while(que.size()){
        P p=que.front();que.pop();
        if(p.first==gx&&p.second==gy);
        for(int i=0;i<4;++i){
            int nx=p.first+dx[i],ny=p.second+dy[i];
            if(0<=nx&&nx<n&&0<=ny&&ny<m&&maze[nx][ny]!='#'&&d[nx][ny]==INF){
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }
}
int main(){
    
    cin>>n>>m;
    
    for(string& s:maze)cin>>s;
    return 0;
}