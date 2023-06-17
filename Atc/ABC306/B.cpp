#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    unsigned long long result=0;
    
    vector<bool>bits(64);
    for(int i=0;i<64;++i){
        int a;
        cin>>a;
        bits[i]=a;
    }
    for(int i=0;i<64;++i){
        if(bits[i]){
            
            result+=(unsigned long long)pow(2,i);
        }
    }
    cout<<result;
    return 0;
}
