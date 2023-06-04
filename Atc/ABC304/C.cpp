#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<pair<int,int>>mans(n);
    vector<bool>result(n);
    result[0]=true;
    queue<int>next;
    next.push(0);
    for(int i=0;i<n;++i){
        cin>>mans[i].first>>mans[i].second;
    }
    #ifdef DEBUG
    for(auto a:mans)cout<<a.first<<" "<<a.second<<endl;
    #endif
    while(next.size()!=0){
        int target=next.front();
        for(int i=0;i<n;++i){
            //同じ人だったらとばす
            if(target==i)continue;
            //距離計算
            double dx_2=pow(mans[target].first-mans[i].first,2);
            double dy_2=pow(mans[target].second-mans[i].second,2);
            #ifdef DEBUG
            cout<<"dx="<<dx_2<<"dy="<<dy_2;
            #endif
            if(d>=sqrt(dx_2+dy_2)){
                #ifdef DEBUG
                cout<<"i="<<i<<"target="<<target<<endl;
                cout<<"d="<<sqrt(dx_2+dy_2)<<endl;
                #endif
                if(!result[i]){
                    next.push(i);
                    result[i]=true;
                }
            }
            //感染するならnextにぶっこむのとresultをtrueに
        }
        next.pop();
    }
    for(auto b: result){
        if(b)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
