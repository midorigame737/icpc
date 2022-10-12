#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>k;
bool binary_search(int x){
    int l=0,r=n;
    while(r-1>=1){
        int i=(l+r)/2;
        if(k[i]==x)return true;
    }
    return false;
}

int main(){
    int ModNum;
    cin>>n;
    k.resize(n);
    for(int i=0;i<n;++i)cin>>k[i];
}