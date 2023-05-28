#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>pictures(m,vector<int>(n));
    for(vector<int>&v:pictures){
        for(int&p:v)cin>>p;
    }
    vector<vector<bool>>friends(n,vector<bool>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
        friends[i][j]=false;
        }
    }
    for(int picI=0;picI<m;++picI){
        for(int humI=1;humI<n;++humI){
            friends[pictures[picI][humI]-1][pictures[picI][humI-1]-1]=true;
            friends[pictures[picI][humI-1]-1][pictures[picI][humI]-1]=true;
        }
    }
    int result=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(!friends[i][j]){
               // cout<<"i="<<i<<"J-"<<j<<endl;
                result++;
            }
        }
    }   
    cout<<result/2;
    return 0;
}
