#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> A;
    for (int i = 0; i < N ; i++) {
        int tmp ;
        cin >> tmp;
        A.insert(tmp);
    }

    cout << A.size() << endl;
    for (auto v: A) {
        cout << v << " ";
    }
    cout << endl;
    
    return 0;
}
