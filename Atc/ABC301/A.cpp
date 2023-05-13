#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n>>s;
    int t,a;
    t=a=0;
    for(int i=0;i<n;++i){
        if(s[i]=='T')t++;
        if(s[i]=='A')a++;
        if(t>=n/2&&t!=0){
            cout<<'T';
            return 0;
        }
        if(a>=n/2&&a!=0){
            cout<<'A';
            return 0;
        }
    }
    return 0;
}
