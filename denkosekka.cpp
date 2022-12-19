#include <bits/stdc++.h>
using namespace std;
class kaden{
    public:
        long int cleanTime,Chargetime;
};
class room{
    public:
        vector<kaden>kadens;
        int len;
        void kaden_len(int kadenlen){
            kadens.resize(kadenlen);
            len=kadenlen;
        }
};
int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.
  int n,step;
  cin>>step>>n;
  vector<room>rooms(n);
  vector<int>dirts(n); 
  for(int i=0;i<n;++i){
    int dirt;
    cin>>dirt;
    dirts[i]=dirt; 
  }
  for(int i=0;i<n;++i){
    
    int len;
    cin>>len;
    //cout<<"test";
    rooms[i].kaden_len(len);
    for(int j=0;j<len;++j){
        //cout<<"len"<<len<<"j"<<j;
        int Cleant,Charget;
        cin>>Cleant>>Charget;
        rooms[i].kadens[j].Chargetime=Charget;
        rooms[i].kadens[j].cleanTime=Cleant;
    }
  }

    //ここから計算
    int result=0;
    for(int roomIdx=0;roomIdx<n;++roomIdx){
        int minTime=-1;
        for(int kadenIdx=0;kadenIdx<rooms[roomIdx].len;++kadenIdx){
            int copydirt=dirts[roomIdx];
            int time=0;
            while(copydirt>0){
                copydirt-=rooms[roomIdx].kadens[kadenIdx].cleanTime+time;
                cout<<"copydirt"<<copydirt<<endl;
                time++;
            }
            time+=rooms[roomIdx].kadens[kadenIdx].Chargetime;
            if(minTime==-1){
                minTime=time;
            }
            else{
                minTime=min(time,minTime);
            }
        }
        cout<<"MinTIme"<<minTime<<endl;
        result+=minTime;
    }
    cout<<result;
  return 0;
}
