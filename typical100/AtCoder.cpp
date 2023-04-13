#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int result=0,count=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='A'||s[i]=='C'|| s[i]=='G' ||s[i]=='T'){
            count++;
            result=max(result,count);
        }
        else count=0;
    }
    cout<<result;
}