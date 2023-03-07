#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Allow{//矢印クラス
    string spell;
    int next;
    int start;
    
    public:
        bool operator<(const Allow &another)const{
            return spell<another.spell;
        }
};

int main(){
    int size/*接点の数*/,allowlen/*矢印の数*/,star,gold;
    cin>>size>>allowlen>>star>>gold;
    vector<Allow>allows;
    allows.resize(allowlen);
    
}