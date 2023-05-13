#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    map<char,int>sCount,tCount;
    for(int i=0;i<s.size();++i){
        sCount[s[i]]++;
    }
    for(int i=0;i<t.size();++i){
        tCount[t[i]]++;
    }
    string atc="atcoder";
    int count=0;
    for(const auto&[key,value]:sCount){
        if(key=='@')continue;
        if(value!=tCount[key]){
            bool flag=false;
            for(auto &s :atc){
                if(key==s){
                    flag=true;
                    count+=abs(value-tCount[key]);
                }
            }
            if(!flag){
                cout<<"No";
                return 0;
            }
        }
    }
    if(count==0||count<tCount['@']||count<sCount['@'])cout<<"Yes";
    else cout<<"No";

    return 0;
}
