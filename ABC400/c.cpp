#include <bits/stdc++.h>
using namespace std;
//これだと間に合わない 2分探索使わないと
int main() {
    long long int N;
    cin >> N;
    long long int a = 2;
    set<long long int> L;
    while (a <= N) {
        long long int bmax = sqrt(N/a);
        long long int b = 1;
        while (b <= bmax){
            L.insert(a * b * b);
            b++;
        }
        a *= 2;
    }
    cout << L.size() << endl;


    return 0;
}
