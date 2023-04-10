#include<iostream>
#include<vector>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<string>v(h);
    for(int i=0;i<h;++i){
        cin>>v[i];
    }
    for(int i=0;i<h;++i){
        for(int j=0;j<w-1;++j){
            if(v[i][j]=='T'&&v[i][j+1]=='T'){
                v[i][j]='P';
                v[i][j+1]='C';
            }
        }
    }
    for(string& s:v){
        cout<<s<<endl;
    }
    return 0;
}
