#include<deque>
#include<algorithm>
#include<cmath>
#include<iostream>
#define MODN 998244353
//#define DEBUG
using namespace std;

long long Mypow(long long x,long long n){
    long long result=1;
    while(n){
        if(n&1)result=(result*x)%MODN;
        x=(x*x)%MODN;
        n >>= 1;  // n を1bit 左にずらす
        /*#ifdef DEBUG
        cout<<"result="<<result<<"x="<<x<<"n="<<n<<endl;
        #endif*/
    }
    return result;
}
//#define DEBUG
int main(){
    int q;
    cin>>q;
    deque<int>S (1,1);//桁数保持するために欲しい
    long long  result=1;
    for(int i=0;i<q;++i){
        int t;
        cin>>t;
        if(t==1){
            int x;
            cin>>x;
            S.push_back(x);
            result=(result*10%MODN+x)%MODN;
        }
        if(t==2){
            #ifdef DEBUG
            cout<<"S.size="<<S.size()-1<<endl;
            cout<<"Mypow="<<Mypow(10,S.size()-1)*S.front()<<endl;
            #endif
            result-=(S.front()*Mypow(10,S.size()-1))%MODN;
            if (result<0) result+=MODN;
            S.pop_front();
        }
        if(t==3){
            cout<<result<<endl;
        }
    }
    return 0;
}