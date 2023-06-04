#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()>3){
        for(auto it=s.begin()+3;it!=s.end();++it){
            *it='0';
        }
    }
    cout<<s;
    return 0;
}
