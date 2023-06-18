#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    long long result=0;
    int n;
    cin>>n;
    vector<int>x(n),y(n);
    for(int i=0;i<n;++i)cin>>x[i]>>y[i];
    //dpとdpのときの状態を表す二次元配列
    
    vector<vector<long long>>dp(n+1,vector<long long>(2,LLONG_MIN));//一つ目のインデックスがi番目までの最大値、二つ目のインデックスは生きてるか
    dp[0][0]=0;
    vector<vector<bool>>condition(n+1,vector<bool>(2));
    
    for(int i=0;i<n;++i){
        if(x[i]){//毒入りを食べる
            dp[i+1][1]=max(dp[i][1],dp[i][0]+y[i]);
        }
        else{
            dp[i+1][0]=max(dp[i][0],max(dp[i][0],dp[i][1])+y[i]);
        }
        dp[i+1][0]=max(dp[i+1][0],dp[i][0]);
        dp[i+1][1]=max(dp[i+1][1],dp[i][1]);
    }
    cout<<max(dp[n][0],dp[n][1]);
    return 0;
}
