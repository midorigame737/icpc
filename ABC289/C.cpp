#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(m);
    for(int i=0;i<m;++i){
        int len;
        cin>>len;
        v[i].resize(len);
        for(int j=0;j<len;++j){
            cin>>v[i][j];
        }
    }
    int ans=0;
    #ifdef DEBUG
    cout<<"1<<m="<<(1<<m)<<endl;
    #endif

    /*集合の選び方は全部で2^n通り
    bit演算を用いて各集合を選択するかを表現する*/
    for(int b=0;b<(1<<m);b++){
        set<int>s;
        for(int i=0;i<m;++i){
            #ifdef DEBUG
            cout<<"b>>i="<<(b>>i)<<endl;
            cout<<"(b>>i)&1="<<((b>>i)&1)<<endl;
            #endif
            if((b>>i)&1){//i番目の集合を選択する場合
                for(auto& x:v[i])s.insert(x);//i番目の集合の中身を追加する(setのため重複するデータは追加されない)
            }
        }
        ans+=(int)s.size()==n;//1~Nまでの集合を作れるかチェック
    }
    cout<<ans<<"\n";
}
