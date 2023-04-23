#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int count=0;
    int result=0;
    bool kushiflag=false;
    for(int i=0;i<s.size();++i){
        if(s[i]=='o'){
            count++;
            result=max(result,count);
        }
        if(s[i]=='-')kushiflag=true;
        if(count!=0&&s[i]=='-'){
            
            count=0;
        }

    }
    if(result==0)cout<<"-1";
    else if(kushiflag) cout<<result;
    else cout<<"-1";
    return 0;
}
