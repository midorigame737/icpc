#include<iostream>
#include<vector>
using namespace std;
class Allow{//���N���X
    string spell;
    int next;
    Allow(string s,int n){
        spell=s;
        next=n;
    }
    bool operator<(const Allow &another)const{
        return spell<another.spell;
    }
};
class contact{//�ړ_�N���X
    private:
        vector<Allow>allows;
    public:

    void SortAllow(){
        
    }      
};
int main(){
    int size,allows,star,gold;
    cin>>size>>allows>>star>>gold;

}