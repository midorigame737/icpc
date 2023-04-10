#include<bits/stdc++.h>
using namespace std;

long long Subtractions(long long a,long long b,long long result){
    //cout<<"a="<<a<<"b="<<b<<"result="<<result<<endl;
    if(a==b){
        //cout<<"a="<<a<<"b="<<b<<"result="<<result;
        return result;
    }
    //TODOもっと簡潔にかけるのであとで直す
    if(a<b){
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
    else{
        if(a%b!=0){
            result+=a/b;
            a=a%b;
        }
        else{
            result+=(a-b)/b;
            a=b;
        }
        return Subtractions(a,b,result);
    }
}
int main(){
    long long a,b;
    cin>>a>>b;
    long long result=Subtractions(a,b,0);
    cout<<result;
    return 0;
}
