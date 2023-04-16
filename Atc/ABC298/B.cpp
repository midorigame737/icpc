#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<vector<int>>A(n,vector<int>(n)),B(n,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>B[i][j];
        }
    }
    vector<vector<int>>CpA(A);
    bool result;
    for(int ri=0;ri<=4;++ri){//A回転ループ
        result=true;
        for(int i=0;i<n;++i){//回転後判定ループ
            for(int j=0;j<n;++j){
                if(A[i][j]==1&&A[i][j]!=B[i][j]){
                    result=false;
                }
            }
        }
        if(result==true){
            cout<<"Yes";
            return 0;
        }
        //回転処理
        CpA=A;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                A[i][j]=CpA[n-j-1][i];
            }
        }
            
    }
    if(!result)cout<<"No";
    return 0;
}
