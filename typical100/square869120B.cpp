#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long >a(n),b(n);
    for(int i=0;i<n;++i){
        cin>>a[i]>>b[i];
    }
    long long  resultStart=a[0],resultExit=a[0];
    for(int i=0;i<n;++i){
            vector<long long>v={a[i],b[i],resultStart,resultExit};
            resultStart = *min_element(v.begin(),v.end());
            resultExit = *max_element(v.begin(),v.end());
    }
    int sum=0;
    
    cout<<sum;
    return 0;
}