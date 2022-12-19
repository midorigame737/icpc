#include<bits/stdc++.h>
using namespace std;
long int zoromeOne(int crtnum){
    long int zorome1=1;
    if(crtnum==1)return 1;
    for(int i=0;i<crtnum;++i){
        zorome1=zorome1*10+1;
    }
    return zorome1;
}
int main(){
    long int n,m;
    long int result=-1;
    cin>>n>>m;
    int i=1;
    int zorome=-1;
    bool list[10];
    for(int i=1;i<9;++i){//ゾロ目ができる可能性がある数字を探す
        int crtnum=m*i;
        int keta=(int)pow(10,(int)log10(crtnum));
        list[crtnum % keta]=true;
    }
    list[0]=false;
    for(long int keta=1;keta<n;++keta){
        for(int i=1;i<10;++i){
            if(list[i]){
            
                 int crtnum=zoromeOne(keta)*i;
                cout<<zoromeOne(keta)<<endl;
                if(crtnum%m==0){
                    cout<<result<<endl;
                    result=crtnum;
                }   
            }
        }
    }
    cout<<result;
}