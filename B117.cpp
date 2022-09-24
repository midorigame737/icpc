#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>husya(n);
    for(int i=0;i<n;++i){
        cin>>husya[i];
    }
    int result=0;
    int numIdx=1;
    while(numIdx<n+1){
        bool IncResult=false;
        for(int i=0;i<husya.size();++i){
            if(husya[i]>numIdx){
                IncResult=true;
            }
            if(numIdx==husya[i]){
                husya[i]=-1;
                numIdx++;
            }
        }
        if(IncResult)++result;
    }
    cout<<result;
    return 0;
}