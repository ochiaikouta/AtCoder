#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    int A[M][N];
    int K[M];
    for (int i = 0; i < M; i++) {
        cin >> K[i];
        for(int j = 0; j < K[i]; j++){
            cin >> A[i][j];
        }
    } 
    int B[N];
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }

    set<int> L;
    
    int count = 0;
    bool found = false;
    for (int i = 0; i < N; i++) {
        L.insert(B[i]);
        for (int j = 0; j < M ; j++) {
            for (int k = 0; k < K[j]; k++) {
                if (!L.count(A[j][k])) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                count++;
            }
            found = false;


        }
        cout << count << endl;
        count = 0;
        
        
    }
    return 0;
}
