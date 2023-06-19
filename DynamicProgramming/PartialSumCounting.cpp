#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" is "<<x<<endl;
#define MOD 1000000009
//#define DEBUG 
int main(){
    int n,A;
    cin>>n;
    vector<int>v(n);
    for(int& a:v)cin>>a;
    #ifdef DEBUG
    for(auto a:v)debug(a);
    #endif
    cin>>A;
    vector<vector<int>>dp(n+1,vector<int>(A+1,0));
    dp[0][0]=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<=A;++j){
            dp[i+1][j]+=dp[i][j];
            if(j>=v[i]){
                dp[i+1][j]+=dp[i][j-v[i]];
            }
        }
    }
    #ifdef DEBUG
    for(auto dpv:dp){
            for(auto it:dpv){
                debug(it);
            }
            cout<<endl;
        }
    #endif
    cout<<dp[n][A]<<endl;
}