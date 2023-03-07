#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int result=0;
    bool bits[3];
    for(int i=0;i<3;++i){
        bits[i]=false;
    }
    for(int i=0;i<3;++i){
        //cout<<pow(2,2-i)<<endl;
        if(a>=pow(2,2-i)){
            bits[2-i]=true;
            a-=pow(2,2-i);
        }
        if(b>=pow(2,2-i)){
            bits[2-i]=true;
            b-=pow(2,2-i);
        }
    }
    for(int i=0;i<3;++i){
        if(bits[i])result+=pow(2,i);
    }
    cout<<result;
}