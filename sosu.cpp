#include<bits/stdc++.h>
using namespace std;
int main(){//�I�[�_�[��sqrt(n)�̑f������
    int n;
    cin>>n;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            cout<<n<<"�͑f���ł͂���܂���";
            return 0;
        }
    }
    cout<<n<<"�͑f���ł�";
    return 0;
}