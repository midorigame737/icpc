#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,color;
    cin>>n>>color;
    vector<int> colors(n);
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin>>colors[i];//色入力
    }
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    int max=INT_MIN;
    int result;
    for(int i=0;i<n;++i){
        if(color==colors[i]){
            
                if(max<nums[i]){
                    result=i+1;
                    max=nums[i];
                }
            }
        }
    
    if(max==INT_MIN){
        for(int i=0;i<n;++i){
            if(colors[0]==colors[i]&&max<nums[i]){
                //cout<<"max="<<max<<"nums"<<nums[i]<<endl;
                result=i+1;
                max=nums[i];
            }
        }
    }
    cout<<result;
    
    return 0;
}
