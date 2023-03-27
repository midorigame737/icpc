#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>vs={"and","not","that","the","you"};
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string buf;
        cin>>buf;
        for(string& s :vs){
            if(s==buf){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}
