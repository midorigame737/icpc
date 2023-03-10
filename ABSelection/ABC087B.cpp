#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int c500,c100,c50;
    cin>>c500>>c100>>c50;
    int x;
    cin>>x;
    int result=0;
    for(int c500i=0;c500i<=c500;c500i++){
        for(int c100i=0;c100i<=c100;c100i++){
            for(int c50i=0;c50i<=c50;c50i++){
                if(c500i*500+c100i*100+c50i*50==x)result++;
            }
        }
    }
    cout<<result;
}