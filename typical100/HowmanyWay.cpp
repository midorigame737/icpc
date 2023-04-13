#include<bits/stdc++.h>
using namespace std;
int main(){   
    int n,x;
    
    while(true){
        cin>>n>>x;
        if(n==0&&x==0)break;
        int result=0;
        for(int i=1;i<n;++i){
            for(int j=i+1;j<=n;++j){
                for(int k=j+1;k<=n;++k){
                    //cout<<"i="<<i<<"j="<<j<<"k="<<k<<"result="<<i+j+k<<endl;
                    if(i+j+k==x)result++;
                }
            }
        }
        cout<<result<<endl;
    }
}