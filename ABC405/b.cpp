#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    set<int> S;
    cin >> N >> M;
    vector<int> A(N+1);
    int ini;
    bool found = false;

    for (int i = 1; i <= N; i++) {
        int tmp;
        cin >> tmp;
        A.at(i) = tmp;
    }

    for (int i = 1; i <= M; i++){
        S.insert(i);
    }
 
    for (int i = 1; i <= N; i++){
        int j = A.at(i);
        if(S.count(j)){
            S.erase(j);
        }

        if(S.size() == 0){
            ini = i;
            found = true;
            break;
        } 
    }

    if (found){
        cout << N - ini + 1  << endl;
    } else {
        cout << 0 << endl;
    }

 

    return 0;
}
