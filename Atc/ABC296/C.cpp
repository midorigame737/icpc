#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    set<int>s;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        s.insert(a);
    }
    for(auto it=s.begin();it!=s.end();++it){
        if(s.find(*it-x)!=s.end()){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
