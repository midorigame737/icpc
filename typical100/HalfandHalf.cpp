#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int PriceA,PriceB,PriceC,X,Y;
    cin>>PriceA>>PriceB>>PriceC>>X>>Y;
    int result=INT_MAX;
    int max_z=2*max(X,Y);
    for(int z=0;z<=max_z;z+=2){
        int x=max(0,X-z/2);
        int y=max(0,Y-z/2);
        int CurrentValue=PriceA*x+PriceB*y+PriceC*z;
        #ifdef DEBUG
        cout<<CurrentValue<<endl;
        #endif
        result=min(result,CurrentValue);
    }
    cout<<result;
}