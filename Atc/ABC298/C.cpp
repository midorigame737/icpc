#include<bits/stdc++.h>
using namespace std;
#define MAX 200000
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>>boxes(n+1);//各番号の箱の中身を記録する2次元vector
    vector<vector<int>>card(MAX);//各番号のカードが入っている箱の番号を記録する2次元vector
    for(int i=0;i<q;++i){
        //cout<<"i="<<i;
        int type;
        cin>>type;
        int num;
        cin>>num;
        if(type==1){
            int boxi;
            cin>>boxi;
            /*TODO pushbackに変更
            type2,3でO(nlog(n))かかるが、insertやるとそのたびにO(n)なのでこっちのほうが早い
            */
            boxes[boxi].push_back(num);
            card[num].push_back(boxi);
        }
        if(type==2){
            //TODO 箱の中身ソートして出力
            sort(boxes[num].begin(),boxes[num].end());
            for(int& a:boxes[num]){
                cout<<a<<" ";
            }
            cout<<endl;
        }
        if(type==3){
                //TODO カードが入ってる箱の番号ソートして探索
                sort(card[num].begin(),card[num].end());
                card[num].erase(unique(card[num].begin(),card[num].end()),card[num].end());
                for(int& cardBox:card[num]){
                cout<<cardBox<<" ";
                }
                cout<<endl;
        }
    }
    
    return 0;
}
