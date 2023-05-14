#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int& a:v)cin>>a;
    
    for(int i=1;i<v.size();++i){
        #ifdef DEBUG
        cout<<"i="<<i<<"value="<<v[i]<<endl;
        #endif
        if(v[i-1]+1<v[i])v.insert(v.begin()+i,v[i-1]+1);//前側にinsertするから今見てる要素からずれない
        if(v[i-1]-1>v[i])v.insert(v.begin()+i,v[i-1]-1);
    }
    for(int& a:v)cout<<a<<" ";
    return 0;
}
