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

    for(int i=0;i<N;++i){//aのインデックスのループ
        for(int SumI=0;SumI<=Ans;++SumI){//Nまでの各和のループ
            (dp[i+1][SumI]+=dp[i][SumI]);//0で初期化してるから大体実質的に代入してるだけ(多分)
            if(a[i]<=SumI){
                dp[i+1][SumI]+=dp[i][SumI-a[i]]%=MOD;
            }
        }
    }
    cout<<dp[N][Ans]<<endl;
}