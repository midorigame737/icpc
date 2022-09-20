#include<bits/stdc++.h>
using namespace std;
vector<int>daruma;
vector<vector<int>>dp;
int rec(int l,int r){
        if(dp[l][r]!=-1)return dp[l][r];
        if(dp[l][r]<=1)return 0;
        int res=0;
        //パターン1
        if(abs(daruma[l]-daruma[r-1])<=1&&rec(l+1,r-1)==r-l-2){
            res=r-1;
        }
        //パターン2
        for(int mid=l+1;mid<=r-1;mid++){
            res=max(res,rec(l,mid)+rec(mid,r));
        }
        return dp[l][r]=res;
    }
int main(){
    int n;
    cin>>n;
    daruma.resize(n);
    for(int i=0;i<n;++i){
        cin>>daruma[i];
    }
    dp.resize(n,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            dp[i][j]=0;
        }
    }
}