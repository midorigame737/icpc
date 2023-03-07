#include <bits/stdc++.h>
#define Modulo 998244353
using namespace std;
int main(){
    long  long  n;
    cin>>n;
    if(n<0){
        if(n%Modulo==0){
        cout<<n%Modulo<<endl;
        }
        else{
            cout<<n%Modulo+Modulo;
        }
        return 0;
    }
    else{
        long int sa=n%Modulo;
        cout<<sa;
        return 0;
    }
}