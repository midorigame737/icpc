#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n,q;
    cin>>n>>q;
    vector<bool>red(n+1);
    vector<int>YellowCount(n+1);
    for(int a:YellowCount){
        a=0;
    }
    for(int i=0;i<q;++i){
        int event,number;
        cin>>event>>number;
        if(event==1){
            YellowCount[number]++;
            if(YellowCount[number]==2){
                red[number]=true;
            }
        }
        if(event==2){
            red[number]=true;
        }
        if(event==3){
            if(red[number]){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        #ifdef DEBUG
        for(int a:YellowCount){
            cout<<a<<endl;
        }
        #endif
    }
}