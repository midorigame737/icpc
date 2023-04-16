#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    bool result=false;//gccだと自動的にfalseにならないので注意!
    for(int i=0;i<n;++i){
        if(s[i]=='x'){
            cout<<"No"<<endl;
            return 0;
        }
        if(s[i]=='o'){
            result=true;
        }
    }
    if(result){
        cout<<"Yes"<<endl;
        return 0;
    }
    else cout<<"No"<<endl;

    return 0;
}
