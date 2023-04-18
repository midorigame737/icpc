#include<deque>
#include<algorithm>
#include<cmath>
#include<iostream>
using namespace std;
//#define DEBUG
int main(){
    int q;
    cin>>q;
    deque<int>S (1,1);//Œ…”•Û‚·‚é‚½‚ß‚É—~‚µ‚¢
    int result=1;
    for(int i=0;i<q;++i){
        int t;
        cin>>t;
        if(t==1){
            int x;
            cin>>x;
            S.push_back(x);
            result=result*10+x;
        }
        if(t==2){
            #ifdef DEBUG
            cout<<"S.size="<<S.size()-1<<endl;
            #endif
            result-=pow(10,S.size()-1)*S.front();
            S.pop_front();
        }
        if(t==3){
            cout<<result%998244353<<endl;
        }
    }
    return 0;
}