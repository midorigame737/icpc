#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int ans=0;
    for(int i=0;i<n;++i)cin>>v[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int len=v[i]+v[j]+v[k];
                int ma=max(v[i],max(v[j],v[k]));
                int rest=len-ma;
                if(ma<rest){//ŽOŠpŒ`‚ªì‚ê‚é
                    ans=max(ans,len);
                }
            }
        }
    }
    cout<<ans;
}