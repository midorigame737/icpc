#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string kibo;
    cin>>kibo;
    vector<bool>result(n);
    int count=0;
    for(int i=0;i<n;++i){
        if(kibo[i]=='o'){
            result[i]=true;
            count++;
        }
        if(count>=k)break;
    }
    for(bool f:result){
        if(f){
            cout<<'o';
        }
        else{
            cout<<'x';
        }
    }

}