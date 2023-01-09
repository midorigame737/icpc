#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main(){
    stack<int>s;
    s.push(1);//stackに1を追加
    s.push(2);
    s.push(3);//{1,2,3}
    printf("%d\n",s.top());//3
    s.pop();//これ実は取り除くだけ
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.pop();
    cout<<s.top();
    return 0;

}