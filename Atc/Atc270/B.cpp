#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if((y>0&&x<0)||(y<0&&x>0)){//符号が違う
        cout<<abs(x);
        return 0;
    }
    if((y>0&&x>0)||(y<0&&x<0)){
        if(abs(x)>abs(y)){//ハンマーとらなきゃいけない
            if((abs(z)>abs(y))&&(z>0&&y>0)||(z<0&&y<0)){//ハンマー取れない
                cout<<-1;
                return 0;
            }
            else{
                if((z>0&&y>0)||(z<0&&y<0)){//ハンマーとれるおなじ方向
                    cout<<abs(x);
                    return 0;
                }
                else{
                    cout<<abs(x)+abs(z-x);
                    return 0;
                }
            }
        }
    }
}