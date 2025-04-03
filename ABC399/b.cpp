#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> P;
    for (int i = 0; i < N; i++){
        int buff;
        cin >> buff;
        P.push_back({buff, 0});
    }
    
    int count = 1;
    set<int> index;
    while (index.size() != N){
        int m = -1;
        set<int> in2;

        for (int i = 0; i < N; i++){
            if (!index.count(i)){
                m = max(m, P[i].first);
            }
        }
        for (int i = 0; i < N; i++){
            if (P[i].first == m && !index.count(i)) {
                P[i].second = count;
                index.insert(i);
                in2.insert(i);
            }
        }
        count += in2.size();
        in2.clear();
    }
    for (int i = 0; i < N; i++){
        cout << P[i].second << endl; 
    }
    
}