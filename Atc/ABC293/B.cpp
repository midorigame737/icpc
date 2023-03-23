#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n++;
    vector<bool>result(n);
    result[0]=true;
    vector<int>v;
    for(int i=1;i<n;++i){
        int a;
        cin>>a;
        if(!result[i]){
            result[a]=true;
        }
    }
    for(int i=0;i<n;++i){
        if(!result[i]){
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int a:v){
        cout<< a<<" ";
    }
    return 0;
}
