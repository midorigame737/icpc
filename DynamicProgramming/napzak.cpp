#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,W;
    cin>>N>>W;
    vector<int>value(N+1);
    vector<int>Weight(N+1);
    for(int i=0;i<N;++i){
        cin>>Weight[i]>>value[i];
    }
    vector<vector<int>>dp(100,vector<int>(10010));
    dp[0][0]=0;
    for(int i=0;i<N;++i){
        for(int SumI=0;SumI<=W;++SumI){
            if(Weight[i]<=SumI){
                dp[i+1][SumI]=max(value[i]+dp[i][SumI-Weight[i]],dp[i][SumI]);
            }
            else{
                dp[i+1][SumI]=dp[i][SumI];
            }
        }
    }
    /*for(int i=0;i<N+1;++i){
        for(int j=0;j<W+1;++j){
            cout<<" "<<dp[i][j];
        }
        cout<<endl;
    }*/
    cout<<dp[N][W];
}
