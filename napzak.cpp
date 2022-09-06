#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,MaxWeight;
    int weight[110],value[110];
    int dp[110][10010];
    cin>>n>>MaxWeight;
    for(int i=0;i<n;++i){
        cin>>value[i]>>weight[i];
    }
    for(int w=0;w<=MaxWeight;++w){
        dp[0][w]=0;
    }
    for(int i=0;i<n;++i){
        for(int W=0;W<=MaxWeight;++W){//0から各重さの期待値を見ていく
            if(weight[i]<W){//現在見ている上限値の重さ入るようであれば
                dp[i+1][W]=max(dp[i][W-weight[i]]+value[i],dp[i][W]);//現在の重さの価値の最大値と、現在入れるか検討しているものと過去に作成した重さの価値の和と比べる
            }
            else dp[i+1][W]=dp[i][W];
        }
    }
}