#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353;
int main(){
    int N;
    cin>>N;
    vector<int>A(N),B(N);
    for(int i=0;i<N;++i)cin>>A[i]>>B[i];
    //dp[i][0]:i枚目まで選んで、i枚目が表の場合のカードの選び方の個数
    //dp[i][1]:i枚目まで選んで、i枚目が裏の場合のカードの選び方の個数
    vector<vector<int>>dp(N,vector<int>(2,0));

    //最初のカードで初期化
    dp[0][0]=1,dp[0][1]=1;
    
    //dp遷移
    for(int i=1;i<N;++i){
        //i枚目を表、i-1枚目を表として選ぶ
        if(A[i]!=A[i-1])dp[i][0]+=dp[i-1][0];
        if(A[i]!=B[i-1])dp[i][0]+=dp[i-1][1];
        //i枚目を裏、i-1を表として裏を選ぶ
        if(B[i]!=A[i-1])dp[i][1]+=dp[i-1][0];
        if(B[i]!=B[i-1])dp[i][1]+=dp[i-1][1];
        
        dp[i][0]%=MOD;
        dp[i][1]%=MOD;
    }
    int ans=dp[N-1][0]+dp[N-1][1];
    cout<<ans%MOD;
    return 0;
}