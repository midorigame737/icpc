#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,MaxWeight;
    int weight[110],value[110];
    int dp[110][10010];
    cin>>n>>MaxWeight;
    for(int i=0;i<n;++i){
        cin>>value[i]>>weight[i];
    }
    for(int w=0;w<=MaxWeight;++w){
        dp[0][w]=0;
    }
    for(int i=0;i<n;++i){
        for(int W=0;W<=MaxWeight;++W){//0����e�d���̊��Ғl�����Ă���
            if(weight[i]<W){//���݌��Ă������l�̏d������悤�ł����
                dp[i+1][W]=max(dp[i][W-weight[i]]+value[i],dp[i][W]);//���݂̏d���̉��l�̍ő�l�ƁA���ݓ���邩�������Ă�����̂Ɖߋ��ɍ쐬�����d���̉��l�̘a�Ɣ�ׂ�
            }
            else dp[i+1][W]=dp[i][W];
        }
    }
}