#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    string s,t;
    cin>>s>>t;
    map<char,int>sCount,tCount;
    for(char& c:s)sCount[c]++;
    for(char& c:t)tCount[c]++;
    
    string atc="atcoder";
    for(char& key:atc){
        if(tCount[key]>sCount[key]){
            int difference = tCount[key]-sCount[key];
            sCount['@']-=difference;
            sCount[key]+=difference;
            if(sCount['@']<0){
                cout<<"No";
                return 0;
            }
        }
        if(tCount[key]<sCount[key]){
            int difference=sCount[key]-tCount[key];
            tCount['@']-=difference;
            tCount[key]+=difference;
            if(tCount['@']<0){
                cout<<"No";
                return 0;
            }
        }
    }
    for(char& c:s){
        if(sCount[c]!=tCount[c]){
            #ifdef DEBUG
            cout<<"key="<<c<<endl;
            cout<<"svaue="<<sCount[c]<<"tvalue="<<tCount[c]<<endl;
            #endif
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
