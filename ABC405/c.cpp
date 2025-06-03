#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N;
    cin >> N;
    vector<long long int> A(N);
    long long int sum1 = 0;
    long long int sum2 = 0;
 

    for (long long int i = 0; i < N; i++) {
        cin >> A.at(i);
        sum1 += A.at(i);
        sum2 += A.at(i) * A.at(i);

    }

    cout << (sum1 * sum1 - sum2)/ 2LL << endl;
    return 0;
}
