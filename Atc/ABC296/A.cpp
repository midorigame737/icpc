#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool result=true;
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;++i){
        if(s[i+1]==s[i])result=false;
    }
    if(result)cout<<"Yes";
    else cout<<"No";
    return 0;
}
