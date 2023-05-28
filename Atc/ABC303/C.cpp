#include<bits/stdc++.h>
using namespace std;
#define R 0
#define L 1
#define U 2
#define D 3
int main(){
    int n,m,h,k;
    vector<int>dx={1,-1,0,0},dy={0,0,1,-1};
    cin>>n>>m>>h>>k;
    string s;
    cin>>s;
    set<pair<int,int>>items;
    for(int i=0;i<m;++i){
        int a,b;
        cin>>a>>b;
        items.insert(make_pair(a,b));
    }
    int x=0,y=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='R'){
            x+=dx[R],y+=dy[R];
        }
        if(s[i]=='L'){
            x+=dx[L],y+=dy[L];
        }
        if(s[i]=='U'){
            x+=dx[U],y+=dy[U];
        }
        if(s[i]=='D'){
            x+=dx[D],y+=dy[D];
        }
        if(--h<0){
            std::cout<<"No";
            return 0;
        }
        if(h<k && items.count({x,y})){
            h=k;
            items.erase({x,y});
        }
    }
    std::cout<<"Yes";
    return 0;
}
