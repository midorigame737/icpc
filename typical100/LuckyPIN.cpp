#include<bits/stdc++.h>
using namespace std;
#define DEBUG
int main(){
    int n;
    string s;
    
    cin>>n>>s;
    int result=0;
    for(int i=0;i<1000;++i){
        ostringstream CurrentNum;
        CurrentNum<<setfill('0')<<setw(3)<<i;
        string CurrentPass=CurrentNum.str();
        
        int count=0;
        
        for(int j=0;j<CurrentPass.size();++j){
            for(int k=0;k<s.size();++k){
                if(CurrentPass[j]==s[k]){
                    count++;
                    j++;
                }
            }
            if(count==3){
                result++;
                //cout<<CurrentPass<<endl;
                
            }
        }
    }
    
    cout<<result;
}