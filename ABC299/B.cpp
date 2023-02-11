#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
vector<bool>used;
stack<int> sta;
int nextout(int index,vector<int>v){
    for(int a:v){
        if(a==index+1){
            #ifdef DEBUG
            cout<<"a="<<a+1 <<endl;
            #endif
            sta.push(index);
            if(!used[a]){
            return nextout(index+1,v);
            }
        }
    }
    used[index]=true;
    cout<<index+1<<" ";
    while(!sta.empty()){
        used[sta.top()]=true;
        cout<<sta.top()+1<<" ";
        sta.pop();
    }
    return index;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    used.resize(n);
    for(int i=0;i<m;++i){
        cin>>v[i];
    }
    for(int i=0;i<n;++i){
        if(!used[i]){
            nextout(i,v);
        }
    }
}