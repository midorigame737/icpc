#include<bits/stdc++.h>
using namespace std;
long long result=0;
long long Subtractions(long long a,long long b){
    if(a==b)return result;
    if(a<b){
        result+=b/a;
        b=b%a;
        return Subtractions(a,b);
    }
    else{
        result+=a/b;
        return Subtractions(a,b);
    }
}
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<Subtractions(a,b);
    return 0;
}
