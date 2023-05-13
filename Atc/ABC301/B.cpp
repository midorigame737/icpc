#include<bits/stdc++.h>
using namespace std;
#define DEBUG
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int& a:v)cin>>a;
    int size=n;
    for(int i=0;i<size-1;++i){
        if(v[i+1]==v[i]-1||v[i+1]==v[i]+1)continue;
        if(v[i]>v[i+1]){
            auto it=v.begin()+i+1;
            int stop=v[i+1];
            for(int j=v[i]-1;j>stop;--j){
                #ifdef DEBUG
                cout<<"j="<<j<<"v[i+1]="<<v[i+1]<<endl;
                cout<<"it="<<v.begin()-it<<endl;
                for(int& a:v)cout<<a<<" ";
                cout<<endl;
                #endif
                v.insert(it,j);
                it++;
                
                #ifdef DEBUG
                cout<<"it="<<v.begin()-it<<endl;
                cout<<"stop="<<stop<<endl;
                for(int& a:v)cout<<a<<" ";
                cout<<endl;
                #endif
            }
            size=v.size();
        }
        else{
            auto it=v.begin()+i+1;
            int stop=v[i+1];
            for(int j=v[i]+1;j<stop;++j){
                #ifdef DEBUG
                cout<<"it="<<it-v.begin()<<endl;
                cout<<"stop="<<stop<<endl;
                for(int& a:v)cout<<a<<" ";
                cout<<endl;
                #endif
                v.insert(it,j);
                it++;
            }
            size=v.size();
        }
    }
    for(int& a:v)cout<<a<<" ";
    return 0;
}
