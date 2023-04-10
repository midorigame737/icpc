#include<iostream>

using namespace std;
//#define DEBUG
int main(){
    string s;
    cin>>s;
    int firstB,endB,firstR,endR,Ki;
    firstR=firstB=-1;
    bool result;
    for(int i=0;i<s.size();++i){
        if(firstB==-1&&s[i]=='B'){
            firstB=i;
        }
        if(firstR==-1&&s[i]=='R'){
            firstR=i;
        }
        if(firstB!=-1&&s[i]=='B'){
            endB=i;
        }
        if(firstR!=-1&&s[i]=='R'){
            endR=i;
        }
        if(s[i]=='K'){
            Ki=i;
        }
    }
    #ifdef DEBUG
    cout<<"firstB"<<firstB<<"endB"<<endB<<"firstR"<<firstR;
    #endif
    if(firstB%2!=endB%2){
        if(firstR<Ki&&Ki<endR){
            cout<<"Yes";
            return 0;

        }
    }
    cout<<"No";
    return 0;
}
