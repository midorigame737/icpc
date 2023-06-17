#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    int n;
    cin>>n;
    vector<int>A(3*n);
    vector<int>results;
    vector<int>count(n,0);
    for(int i=0;i<3*n;++i){
        int current;
        cin>>current;
        if(++count[current-1]==2){
            results.push_back(current);
        }
    }
    
    for(auto r:results){
        cout<<r<<" ";
    }
    return 0;
}
