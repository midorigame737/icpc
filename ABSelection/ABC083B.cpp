//#define DEBUG
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int keta=s.size();
    int n=stoi(s);
    int a,b;
    cin>>a>>b;
    int result=0;
    vector<int>v(0);
    for(int i=0;i<=n;++i){
        int check=0;
        int ketasum=i;
        while(ketasum>0){
            #ifdef DEBUG
            cout<<ketasum<<endl;
            #endif
            check+=ketasum%10;
            ketasum/=10;
        }
        #ifdef DEBUG
        cout<<"check="<<check<<" "<<i<<endl;
        #endif
        if(check>=a&&check<=b){
            v.push_back(i);
        }
    }
    result=accumulate(v.begin(),v.end(),0);
    cout<<result;
    return 0;
}