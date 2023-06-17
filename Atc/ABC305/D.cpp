#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    int n;
    cin>>n;
    vector<int> bedtime(n);
    for(int i=0;i<n;++i){
        cin>>bedtime[i];
    }
    vector<int>sleeptime(n);//各区間の睡眠時間の合計を覚えておく配列
    for(int i=1;i<n;i++){
        sleeptime[i]=sleeptime[i-1];
        if(i%2==0)sleeptime[i]+=bedtime[i]-bedtime[i-1];
    }
    #ifdef DEBUG
    for(auto s:sleeptime)debug(s);
    #endif
    auto f=[&](int x){
        int i= lower_bound(bedtime.begin(),bedtime.end(),x) - bedtime.begin() -1;//
        if(i<0)return 0;
        int result=sleeptime[i];
        if(i%2==1){
            result+=x-bedtime[i];
        }
        return result;
    };

    int q;
    cin>>q;
    for(int i=0;i<q;++i){
        int l,r;
        cin>>l>>r;
        #ifdef DEBUG
        debug(f(r));
        debug(f(l));
        #endif
        int result=f(r)-f(l);
        cout<<result<<endl;
    }
    return 0;
}
