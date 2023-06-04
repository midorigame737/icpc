#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    vector<int>age(n);
    for(int i=0;i<n;++i){
        cin>>v[i]>>age[i];
    }
    auto start=min_element(age.begin(),age.end());
    for(int i=start-age.begin();i<n;++i){
        cout<<v[i]<<endl;
    }
    for(int i=0;i<start-age.begin();++i){
        cout<<v[i]<<endl;
    }
    return 0;
}
