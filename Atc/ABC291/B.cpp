#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n;
    cin>>n;
    vector<int>v(n*5);
    for(int i=0;i<n*5;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int count=0;count<n;++count){
        #ifdef DEBUG
        cout<<"test";
        #endif
        v.erase(v.begin());
        v.erase(v.end()-1);
        #ifdef DEBUG
        for(int a:v){
            cout<<a<<" ";
        }
        #endif 
    }
    cout<<accumulate(v.begin(),v.end(),0.0)/v.size();
}