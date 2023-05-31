#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    vector<pair<int,int>>starsign(m);
    for(auto point:starsign){
        cin>>point.first>>point.second;
    }
    int n;
    cin>>n;
    set<pair<int,int>>stars;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x,y;
        stars.insert({x,y});
    }
    for(auto star=stars.begin();star!=stars.end();++star){
        //TODOstarとの差を取る
        int dx=starsign[0].first- star->first;
        int dy=starsign[0].second- star->second;
        //TODO星座が作れるか
        for(auto nextStar=starsign.begin()+1;nextStar!=starsign.end();++nextStar){
            if(stars.find({nextStar->first-dx,nextStar->second-dy})==stars.end()){
                break;
            }
        }
    }

}