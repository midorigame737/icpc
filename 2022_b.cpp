#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>cards(n,vector<int>(2));
    
    for(int i=0;i<n;++i){
        for(int j=0;j<2;++j){
            cin>>cards[i][j];
        }
    }
        cout<<*cards[1].begin()+1<< endl;
        cards.at(1).erase(cards[1].begin());//cards[1].begin()+1
    
    for(int i=0;i<n;++i){
        for(int j=0;j<2;++j){
            cout<<cards[i][j];
        }
        cout<<endl;
    }
    //cout<<cards.empty();

}