#include<bits/stdc++.h>
//#define DEBUG
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    for(int i=2;i<=n;++i){
        int count=0;
        for(int j=1;j<=i;j+=2){
            if(i%j==0)count++;
        }
        if(count==8){
            #ifdef DEBUG
            cout<<i<<endl;    
            #endif
            result++;
        }
    }
    cout<<result;
}