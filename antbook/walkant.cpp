#include<bits/stdc++.h>
using namespace std;
int main(void){
    int l;
    cin>>l;
    int n;
    cin>>n;
    vector<int>ants(n);
    int MaxTime=0,MinTime=0;
    for(int i=0;i<n;++i)cin>>ants[i];

    for(int i=0;i<n;++i){
        MinTime=max(MinTime,min(ants[i],l-ants[i]));
    }

    for(int i=0;i<n;++i){
        MaxTime=max(MaxTime,max(ants[i],l-ants[i]));
    }
    cout<<"Min"<<MinTime<<endl<<"Max"<<MaxTime<<endl;
    return 0;
}