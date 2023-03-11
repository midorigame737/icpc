#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int Alice,Bob;
    Alice=Bob=0;
    while(v.size()!=0){
        auto max=max_element(v.begin(),v.end());
        Alice+=*max;
        v.erase(max);
        if(v.size()==0)break;
        max=max_element(v.begin(),v.end());
        Bob+=*max;
        v.erase(max);
    }
    cout<<Alice-Bob;
    return 0;
}