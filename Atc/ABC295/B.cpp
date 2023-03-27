#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int width,height;
    cin>>height>>width;
    vector<vector<char>>map(height,vector<char>(width));
    vector<vector<bool>>blasted(height,vector<bool>(width));
    for(int y=0;y<map.size();++y){
        for(int x=0;x<map[y].size();++x){
            cin>>map[y][x];
        }
    }
    for(int y=0;y<height;++y){
        for(int x=0;x<width;++x){
            if(!isdigit(map[y][x]))continue;
            int power=map[y][x]-'0';
            #ifdef DEBUG
            cout<<"power"<<power<<endl;
            #endif
            for(int ny=0;ny<height;++ny){
                for(int nx=0;nx<width;++nx){
                    int manhattan=abs(x-nx)+abs(y-ny);
                    if(manhattan<=power)blasted[ny][nx]=true;
                }
            }
        }
    }
    for(int i=0;i<height;++i){
        for(int j=0;j<width;++j){
            if(blasted[i][j])map[i][j]='.';
        }
    }
    for(vector<char>& m:map){
        for(char& c:m){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
