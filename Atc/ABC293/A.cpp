#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    string s,buf;
    cin>>s;
    buf=s;
    for(int i=1;i<s.size();i+=2){
        #ifdef DEBUG
        cout<<i<<endl;
        #endif
        buf[i-1]=s[i];
        buf[i]=s[i-1];
    }
    cout<<buf;
    return 0;
}
