#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    long long int start;
    long long  result=(long long)2e+18;
    for(long long i=1;i<=n;++i){
        long long x=m/i;
        if(x<=n)result=min(result,i*x);
        if(i>x)break;
        m++;
    }
    if(result==2e+18)cout<<-1<<endl;
    else cout<<result;
    return 0;
}
