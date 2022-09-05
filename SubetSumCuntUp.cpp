#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000009
//部分和数え上げ問題
int main(){
    int N,Ans;
    vector<int>a(N);
    for(int i=0;i<N;++i)cin>>a[i];
    vector<vector<int>> dp(110,vector<int>(10010));
    dp[0][0]=1;

    for(int i=0;i<N;++i){
        for(int j=0;j<=Ans;++j){
            (dp[i+1][j]+=dp[i][j])%=MOD;
            if(a[i]<=j){
                dp[i+1][j]+=dp[i][j-a[i]]%=MOD;
            }
        }
    }
    cout<<dp[N][Ans]<<endl;
}