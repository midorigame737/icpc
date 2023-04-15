#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int n;
    cin >> n;

    vector<int> x(n), y(n); // 座標
    set<pair<int, int>> st; // 座標のセット、後で「この座標があるかどうか？」参照するため高速で動作する必要がある
    for(int i = 0; i < n; ++i){
        cin >> x[i] >> y[i];
        st.insert(make_pair(x[i], y[i]));
    }

    int res = 0;
    for(int i = 0; i < n-1; ++i){ // i,jの二重ループで「二本の柱＝正方形の1辺候補」を全探索
        for(int j = i+1; j < n; ++j){
            pair<int, int> vec1 = make_pair(x[j] - x[i], y[j] - y[i]); // 2本の柱からベクトルを作っておく
            int s = (x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]); // 1辺がわかれば面積がわかるので先に計算しておく

            if(s < res) continue; // 暫定最大面積に及ばなければこの後は見る必要がない

            vector<pair<int, int>> vec2_cand(2); // 1辺が決まるとベクトルでいう始点から伸びるもう1辺は2通りしかない
            vec2_cand[0] = make_pair(vec1.second, -vec1.first); // 2つ目のベクトル、候補1（ベクトル1に対して内積が0になるベクトルが二つある）
            vec2_cand[1] = make_pair(-vec1.second, vec1.first); // もう一つ

            for(auto vec2: vec2_cand){ // 二つの候補について調べる
                if(st.find(make_pair(vec2.first + x[i], vec2.second + y[i])) != st.end()){ // ベクトル2が存在するか。※ベクトル1の始点を加えて座標に変換することを忘れない

                    pair<int, int> vec3 = make_pair(vec1.first + vec2.first, vec1.second + vec2.second); // もし存在するなら、ベクトル3はベクトル1 + ベクトル2で確定なのでそれが存在するかを調べる
                    if(st.find(make_pair(vec3.first + x[i], vec3.second + y[i])) != st.end()){
                        res = max(res, s); // ベクトル3の座標もあればそこに正方形を作れるので暫定TOPと戦う
                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}