#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,A;
    cin>>N>>A;
    int a[110];
    for(int i=0;i<N;++i)cin>>a[i];
    vector <vector<bool>>dp(110,vector<bool>(10010));
    dp[0][0]=true;

    for(int i=0;i<N;++i){
        for(int j=0;j<=A;++j){
            dp[i+1][j]=(dp[i+1][j]||dp[i][j]);
            if(a[i]<j){
                dp[i+1][j]=(dp[i+1][j]||dp[i][j-a[i]]);
            }
        }
    }
    if(dp[N][A])cout<<"YES";
    else cout<<"NO";
}