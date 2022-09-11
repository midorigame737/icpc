#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;++i)cin>>A[i];
    int min=*min_element(A.begin(),A.end());
    int mincount=0;
    vector<int>v;
    v.push_back(0);
    for(int MI=2;MI<min;++MI){
        for(int i=0;i<n;++i){
            int currentCount=0;
            for(int j=0;j<v.size();++j){
                if(v[j]!=A){
                    v.push_back(A[i]);
                }
            }
        }
        if(mincount==0||mincount>v.size())mincount=v.size();
    }
    cout<<v.size()-1;
}