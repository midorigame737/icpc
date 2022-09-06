#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
    long long n;
    cin >> n;
    n %= mod;
    if(n < 0) n += mod;
    cout << n << endl;
}
