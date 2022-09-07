#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int N,big=0;
    cin>>N;
    vector<int>A(N);
    for(int i=0;i<N;++i)cin>>A[i];
    for(int i=0;i<N;++i){
        if(A[i]>0){
            big+=A[i];
        }
    }
    cout<<big;
}