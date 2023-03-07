#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<bool>b(n);
    int result=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<m;++i){
        int buf;
        cin>>buf;
        b[buf-1]=true;
    }
    for(int i=0;i<n;++i){
        if(b[i])result+=a[i];
    }
    cout<<result;

}