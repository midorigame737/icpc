#include<bits/stdc++.h>
using namespace std;
vector<int>cards;
void shufle(int n,int m){
    int setlen=n/m;
    if(n%m==0)++setlen;
    vector<int>v(n+1);
    for(int i=0;i<n+1;++i){
        v[i]=cards[i];
    }
    int cardsI=n-m+1;
    int count=0;
    for(int i=1;i<n+1;++i){
        cards[cardsI]=v[i];
        //cout<<"cardsI"<<cardsI<<" i"<<i<<endl;
        //cout<<"card"<<cards[i]<<endl;
        cardsI++;
        count++;
        //cout<<"count"<<count<<" "<<endl;
        if(count%m==0)cardsI-=2*m;
        if(cardsI<1)cardsI=1;
    }
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    cards.resize(n+1);
    for(int i=0;i<n+1;++i){
        cards[i]=i;
    }
    for(int i=0;i<k;++i){
        shufle(n,m);
    }
    
    for(int i=1;i<n+1;++i){
        cout<<cards[i]<<endl;
    }
}