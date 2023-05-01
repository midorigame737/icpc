#include<bits/stdc++.h>
using namespace std;
//#define DEBUG

int main(){
    int h,w;
    cin>>h>>w;
    vector<string>A(h),B(h);
    for(string& s:A)cin>>s;
    for(string& s:B)cin>>s;

    for(int s=0;s<h;s++){//横シフトループ
        for(int t=0;t<w;++t){//縦シフトループ
            bool result=true;
            for(int y=0;y<h;++y){//縦ループ
                for(int x=0;x<w;++x){//横ループ
                    #ifdef DEBUG
                    cout<<"i="<<i<<"s="<<s<<"h="<<h<<"index"<<(i-s+h)%h<<endl;
                    #endif
                    int shiftedY=(y-s+h)%h;
                    int shiftedX =(x-t+w)%w;
                    result = A[shiftedY][shiftedX]==B[y][x];
                }
            }
            if(result){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
