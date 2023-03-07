#include<bits/stdc++.h>
using namespace std;
//部分和問題
int main(){
    int N,A;
    cin>>N>>A;
    int a[110];//和を求めるために使える数字の配列
    for(int i=0;i<N;++i)cin>>a[i];
    vector <vector<bool>>dp(110,vector<bool>(A));
    dp[0][0]=true;

    for(int i=0;i<N;++i){//aの配列全部見るためのループ
        for(int SumI=0;SumI<=A;++SumI){//
            dp[i+1][SumI]=(dp[i+1][SumI]||dp[i][SumI]);//A[i]を選ばない場合、事前に対象の数字が作れているならば
            if(a[i]<SumI){
                dp[i+1][SumI]=(dp[i+1][SumI]||dp[i][SumI-a[i]]);//合計-a[i]が作れることがわかっているならば現在調べている物も作れる
            }
        }
    }
    if(dp[N][A])cout<<"YES";
    else cout<<"NO";
}