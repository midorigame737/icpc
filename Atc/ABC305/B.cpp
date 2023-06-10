#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    vector<int>v={3,1,4,1,5,9};
    char p,q;
    cin>>p>>q;
    int start,end;
    start=min((int)p,(int)q)-'A';
    end=max((int)p,(int)q)-'A';
    int result=0;
    for(int i=start;i<end;++i){
        result+=v[i];
    }
    cout<<result;
    return 0;
}
