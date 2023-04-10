#include<vector>
#include<iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    cin>>d;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int last=v[0];
    for(int i=1;i<n;++i){
        if(v[i]-last<=d){
            cout<<v[i];
            return 0;
        }
        last=v[i];
    }
    cout<<-1<<endl;
    return 0;
}
