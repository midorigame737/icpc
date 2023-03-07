#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(void){
    int MaxAdd,MinAdd,Curent;
    vector<int>buf;
    buf.resize(20);
    MaxAdd=MinAdd=-1;
    cin>>Curent;
    while(Curent!=0){
        cout<<"Curerent="<<Curent<<endl;
        for(int i=0;i<Curent;i++){
            cin>>buf[i];
            if(MaxAdd==-1||buf[MaxAdd]<buf[i])MaxAdd=i;
            if(MinAdd==-1||buf[MinAdd]>buf[i])MinAdd=i;
        }
        //cout<<"Max:"<<buf[MaxAdd]<<"Min"<<buf[MinAdd]<<endl;
        buf[MaxAdd]=buf[MinAdd]=0;
        
        cout<<accumulate(buf.begin(),buf.end(),0)/(Curent-2)<<endl;
        MaxAdd=MinAdd=-1;
        cin>>Curent;
    }
    
    
    return 0;
}