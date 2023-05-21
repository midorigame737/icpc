#include<bits/stdc++.h>
using namespace std;
//#define DEBUG
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>words(n);
    for(string& s:words)cin>>s;
    vector<map<char,int>>cCount(n);
    sort(words.begin(),words.end());
    while(next_permutation(words.begin(),words.end())){
        int result=0;//合う文字列の数を記録 nと同じなら条件を満たす
        int count=0;
        for(int i=1;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                
                if(words[i][j]==words[i-1][j]){
                    
                    count++;
                }
            }
            #ifdef DEBUG
            cout<<"count="<<count<<"m-1="<<m-1<<endl;
            #endif
            if(count>=m-1){
                #ifdef DEBUG
            cout<<"words[i][j]="<<words[i]<<"  words[i-1][j]="<<words[i-1]<<endl;
                #endif
                result++;
            }
        }
        if(result==n-1){
            cout<<"Yes";
            return 0;
        }   
        #ifdef DEBUG
        cout<<"result="<<result<<endl;
        #endif
    }
    cout<<"No";
    return 0;
}
