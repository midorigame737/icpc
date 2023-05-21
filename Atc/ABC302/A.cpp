#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int result=0,a,b;
    cin>>a>>b;
    result=a/b;
    if(a%b!=0)result++;
    cout<<result;
    return 0;
}
