#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> A(6, vector<int>(6));
    vector<vector<int>> B(6, vector<int>(6));
    
    int X, Y;
    cin >> X >> Y;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            A[i][j] = i + j + 2;
            B[i][j] = abs(i - j);
        }
    }
    int count = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (A[i][j] >= X || B[j][i] >= Y) {
                count++;    
            }
        }
    }
    long double c2 = (long double)count;
    long double all = 36.0;
    long double ans = c2 / all;
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}
