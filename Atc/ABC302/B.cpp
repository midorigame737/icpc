#include<bits/stdc++.h>
using namespace std;
#define SnukeSize 4
int main(){
    int n,m,x,y;
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,-1,0,1};
    string str;
    cin>>n>>m;
    vector<string>s(n);
    for(string& a:s)cin>>a;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            for(int k=0;k<8;++k){
                str="";
                for(int t=0;t<5;++t){
                    x=i+t*dx[k],y=j+t*dy[k];
                    if((x<0)||(x>=n)||(y<0)||(y>=m))break;
                    str+=s[x][y];
                }
                if(str=="snuke"){
                    for(int t=0;t<5;++t){
                        x=i+t*dx[k]+1,y=j+t*dy[k]+1;
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}
