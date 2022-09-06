#include<bits/stdc++.h>
using namespace std;
int main(void){
    vector<int> v;
    int n;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    cout<<v[0]<<v[1]<<v[2];
}