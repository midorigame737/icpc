#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>socks;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        socks[a]++;
    }
    int result=0;
    for(auto& s:socks){
        result+=s.second/2;
        
    }
    cout<<result;
    return 0;
}
