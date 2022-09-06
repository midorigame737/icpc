#include<bits/stdc++.h>
using namespace std;
int main(){//ƒI[ƒ_[‚ªsqrt(n)‚Ì‘f””»’è
    int n;
    cin>>n;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            cout<<n<<"‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ";
            return 0;
        }
    }
    cout<<n<<"‚Í‘f”‚Å‚·";
    return 0;
}