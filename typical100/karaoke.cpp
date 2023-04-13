#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>points(n,vector<int>(m));
    for(vector<int>& p:points){
        for(int& data:p){
            cin>>data;
        }
    }
    long long  result=0;
    for(int music1=0;music1<m;++music1){
        for(int music2=0;music2<m;++music2){
            long long sum=0;
            for(int student=0;student<n;++student){
                sum+=max(points[student][music1],points[student][music2]);
            }
            result=max(result,sum);
        }
    }
    cout<<result;
}