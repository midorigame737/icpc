#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x,y;
    x=y=0;
    set<pair<int,int>>used({{0,0}});
    for(int i=0;i<n;++i){
        switch (s[i])
        {
            case 'R':
                x++;
                /* code */
            break;
            case 'L':
                x--;
            break;
            case 'U':
                y++;
            break;
            case 'D':
                y--;
            break;
        }
        if(used.find({x,y})!=used.end()){
            cout<<"Yes"<<endl;
            return 0;
        }
        used.insert({x,y});
    }
    cout<<"No"<<endl;
}