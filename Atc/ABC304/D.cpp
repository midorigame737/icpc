#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,h;
    cin>>w>>h;
    int n;
    cin>>n;
    vector<pair<int,int>>strawberrys;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        strawberrys.push_back({x,y});
    }
    int a;
    cin>>a;
    vector<int>cutY(a);
    for(int i=0;i<a;++i){
        cin>>cutY[i];
    }
    int b;
    cin>>b;
    vector<int>cutX(b);
    for(int i=0;i<b;++i){
        cin>>cutX[i];
    }
    map<pair<int,int>,int>pices;//いちごがのってるピースといちごの数覚える
    //todo いちごループ
    for(int i=0;i<n;i++){
        //どこのピースか調べる
        int x=lower_bound(cutY.begin(),cutY.end(),strawberrys[i].first)-cutY.begin();
        int y=lower_bound(cutX.begin(),cutX.end(),strawberrys[i].second)-cutX.begin();
        pices[{x,y}]++;
    }
    int m=n,M=0;
    for(auto p:pices){
        M=max(p.second,M);
        m=min(p.second,m);
    }
    if(pices.size()<(a+1)*(b+1))m=0;
    cout<<m<<" "<<M;
    return 0;
}
