#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>k;
bool binary_search(int x){
    int l=0,r=n;
    while(r-1>=1){
        int i=(l+r)/2;
        if(k[i]==x)return true;
        else if (k[i]<x)l=i+1;
        else r=i;
    }
    return false;
}

int main(){
    int ModNum;
    cin>>n;
    k.resize(n);
    for(int i=0;i<n;++i)cin>>k[i];
    sort(k.begin(),k.begin()+n);
    bool f=false;
    for(int a=0;a<n;++a){
        for(int b=0;b<n;++b){
            for(int c=0;c<n;++c){
                //最も内側のループの代わりに二分探索
                if(binary_search(ModNum-k[a]-k[b]-k[c])){
                    f=true;
                }
            }
        }
    }
    if(f)cout<<"Yes";
    else cout<<"No";
}