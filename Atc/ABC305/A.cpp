#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=100;i+=5){
        if(n-i<2.5f){
            cout<<i;
            return 0;
        }
    }
    return 0;
}
