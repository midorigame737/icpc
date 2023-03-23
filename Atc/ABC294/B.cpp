#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<int>>A(h,vector<int>(w));
    for(vector<int>&row:A){
        for(int&x:row){
            cin>>x;
        }
    }
    string s;
    for(int i=0;i<h;++i){
        s="";
        for(int j=0;j<w;++j){
            if(A[i][j]==0){
                s+='.';
            }
            else{
                s+='A'+A[i][j]-1;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
