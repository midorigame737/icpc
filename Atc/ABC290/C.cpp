#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    set<int>st;
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    #ifdef DEBUG
    for(int a:v)cout<<a<<" ";
    cout<<endl;
    #endif
    int result=0;
    for(int i=0;i<n;++i){
        if(v[i]<k)st.insert(v[i]);//集合に含まれる可能性のある数字を追加
    }
    #ifdef DEBUG
    for(auto i=st.begin();i!=st.end();++i){
        cout<<*i<<"\n";
    }
    #endif 
    for(int i=0;i<k;++i){//0からMEXがいくつまで作れるか検証していく
        if(st.find(i)!=st.end())result++;
        else break;
    }
    cout<<result;
}