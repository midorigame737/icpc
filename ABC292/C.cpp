#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n,result=0;
    cin>>n;
    vector<vector<pair<int,int>>>dp(n);
    for(int i=1;i<n;++i){
        int j=1;
        bool flag=true;
        while(i*j<n){
            /*for(int k=0;k<dp[i*j].size();k++){
                if(dp[i*j][k].first==i||dp[i*j][k].second==i){
                    flag=false;
                    break;
                }
            }*/
            if(flag){
                dp[i*j].push_back(pair<int,int>(i,j));
                dp[i*j].push_back(pair<int,int>(j,i));
            }
            j++;
        }
    }
    for(int i=1;i<sqrt(n);++i){
        result+=dp[i].size()+dp[n-i].size();
        cout<<dp[i].size()<<" "<<dp[n-i].size()<<endl;
    }
    cout<<result;
    #ifdef DEBUG
    for(int i=0;i<n;++i){
        cout<<dp[i].size();
    }
    #endif
    
}