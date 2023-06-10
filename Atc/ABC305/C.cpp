#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<" [ " << #x << " is: " << x << " ] "<<endl;
int main(){
    int h,w;
    cin>>h>>w;
    vector<string>glid(h);
    for(int i=0;i<h;++i){
        cin>>glid[i];
    }
    
    for(int y=0;y<h;y++){
        for(int x=0;x<w;++x){
            int count=0;
            
            if(glid[y][x]=='.'){
                if(x+1<w){if(glid[y][x+1]=='#')count++;}
                   
                if(x-1>=0){if(glid[y][x-1]=='#')count++;}
                   
                if(y-1>=0){if(glid[y-1][x]=='#')count++;}
                
                if(y+1<h){if(glid[y+1][x]=='#')count++;}
                
                    
                if(count>=2){
                    cout<<y+1<<" "<<x+1;
                    return 0;
                }
            }        
        }
    }
    
    return 0;
}
