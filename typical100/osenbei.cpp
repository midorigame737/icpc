#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
#define debug(x) cout<<#x<<"is "<<x<<endl;
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>senbei(r,vector<int>(c));
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>senbei[i][j];
        }
    }
    #ifdef DEBUG
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<senbei[i][j];
        }
    }
    #endif
    int result=0;
    vector<bool>select(r,false);//i行目を裏返すかどうか覚え解く
    for(int bit=0;bit<(1<<r);++bit){//行を裏返すかの全探索
        for(int i=0;i<r;++i){
            if((bit & (1<<i))!=0){//数値をbitに変換してi桁目とAND演算
                select[i]=true;//ビットがたってれば裏返す
            }
        }        
        int tmp=0;
        for(int i=0;i<c;++i){//せんべいカウントループ
            int sum1=0;
            int sum2=0;
            for(int j=0;j<r;++j){
                if(select[j]){//裏返さない
                    if(senbei[j][i]){
                        sum1++;
                    }else{
                        sum2++;
                    }
                }else{//裏返す
                    if(!senbei[j][i]){
                        sum1++;
                    }
                    else sum2++;
                }
            }
            #ifdef DEBUG
            debug(sum1);
            debug(sum2);
            #endif
            tmp+=max(sum1,sum2);
        }
        result=max(result,tmp);
    }
    cout<<result<<endl;
}