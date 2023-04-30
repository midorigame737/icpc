#include<bits/stdc++.h>
using namespace std;
string left_shift(string s){
    string result;
    for(int i=0;i<s.size();++i){
        if(i==0){
            result[s.size()-1]=s[i];
        }
        else{
            result[i-1]=s[i];
        }
    }
    return result;
}
vector<string> up_shift(vector<string> s){
    vector<string> result;
    for(int i=0;i<s.size();++i){
        if(i==0){
            result[s.size()-1]=s[i];
        }
        else{
            result[i-1]=s[i];
        }
    }
    return result;
}
int main(){
    int h,w;
    cin>>h>>w;
    vector<string>A(h),B(h);
    for(string& s:A)cin>>s;
    for(string& s:B)cin>>s;
    for(int s=0;s<h;s++){
        for(int t=0;t<w;++t){
            bool ok=true;
            for(int i=0;i<h;++i){
                for(int j=0;j<w;++j){
                    if(A[(i-s+h)%h][(j-t+w)%w]!=B[i][j])ok=false;
                }
            }
            if(ok){
                cout<<"Yes";
                return 0;
            }
        }
    }
cout<<"No"<<endl;
    return 0;
}
