#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>>glid(h,vector<char>(w));
    vector<int>result(min(h,w));
    for(int&a:result){a=0;}
    for(vector<char>&a:glid){
        for(char&b:a){
            cin>>b;
        }
    }
    
    for(int y=1;y<h-1;++y){
        for(int x=1;x<w-1;++x){
            //cout<<"Current("<<x<<","<<y<<") value="<<glid[y][x]<<endl;
            if(glid[y][x]!='#')continue;
            int size=1;
            while(size<min(h,w)){
                if(x-size<0||x+size>=w||y-size<0||y+size>=h)break;
                if(glid[y+size][x+size]!='#'||
                    glid[y+size][x-size]!='#'||
                    glid[y-size][x+size]!='#'||
                    glid[y+size][x+size]!='#'){
                        
                        break;        
                    }
              //  cout<<"size="<<size<<endl;
                
                size++;
            }
            if(size!=1)result[size-2]++;
        }
    }
    for(int& a:result){
            cout<<a<<' ';
        }
    return 0;
}
