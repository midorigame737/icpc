#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    int n;
    cin>>n;
    vector<int> bedtime(n);
    for(int i=1;i<=n;++i){
        cin>>bedtime[i];
    }
    vector<int>sleeptime(n);//各区間の睡眠時間の合計を覚えておく配列
    for(int i=1;i<n;++i){
        sleeptime[i]=sleeptime[i-1];
        if(i%2==0)sleeptime[i]+=bedtime[i]-bedtime[i-1];
    }
    auto f=[&](int x){
        int i= (lower_bound(bedtime.begin(),bedtime.end(),x)-bedtime.begin()-1);//
        return i;
    };
    int q;
    cin>>q;
    for(int i=0;i<q;++i){
        int l,r;
        cin>>l>>r;
        int result=f(r)-f(l);

    }
    return 0;
}
