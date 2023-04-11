#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
long long Subtractions(long long a,long long b,long long result){
    #ifdef DEBUG
    cout<<"a="<<a<<"b="<<b<<"result="<<result<<endl;
    #endif
    if(a==b){    
        return result;
    }
    int big=max(a,b);
    int smal=min(a,b);
    b=big;
    a=smal;
    if(b%a!=0){
        result+=b/a;
        b=b%a;
    }
    else{
        result+=(b-a)/a;
        b=a;
    }
    return Subtractions(a,b,result);
}

int main(){
    long long a,b;
    cin>>a>>b;
    long long result=Subtractions(a,b,0);
    cout<<result;
    return 0;
}
