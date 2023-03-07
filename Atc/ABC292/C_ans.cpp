#include <bits/stdc++.h>
using namespace std;
//#define DEBUG
int main() {
    
	int N;
	cin>>N;
	
	long long ans = 0;
	
	for(int i=1;i<N;i++){
		int X = i,Y = N-i;
		long long x = 0,y = 0;
		for(int j=1;j*j<=X;j++){//jがsqrt(x)までループ
			if(X%j==0){
				x++;
				if(X!=j*j)x++;
			}
		}
		for(int j=1;j*j<=Y;j++){
			if(Y%j==0){
				y++;
				if(Y!=j*j)y++;
			}
		}
        #ifdef DEBUG
        cout<<"X="<<X<<"Y="<<Y<<"x="<<x<<"y="<<y<<endl;
        #endif
		ans += x * y;
	}
	
	cout<<ans<<endl;
	
	return 0;
}
