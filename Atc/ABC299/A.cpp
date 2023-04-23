#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    bool in=false;
    
    string s;
    int n;
    cin>>n>>s;
    for(int i=0;i<s.size();++i){
        if(in==false&&s[i]=='*'){
            #ifdef DEBUG
            cout<<"i="<<i;
            #endif
            cout<<"out";
            return 0;
        }
        if(in==false&&s[i]=='|'){
            in=true;
            //continue;
        }
        else if(in){
            if(s[i]=='*'){
                cout<<"in"<<endl;
                return 0;
            }
            if(s[i]=='|'){
                cout<<"Out";
                #ifdef DEBUG
                cout<<"i="<<i;
                #endif
                return 0;
            }
        }
    }
    return 0;
}
