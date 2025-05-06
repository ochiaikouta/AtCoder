#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M , Q;
    cin >> N >> M >> Q;
    vector<set<int>> D(N);

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int x, y;
            cin >> x >> y;
            D.at(x-1).insert(y);
        }else if (type == 2) {
            int x;
            cin >> x;
            D.at(x-1).insert(0);
        }else if (type == 3) {
            int x, y;
            cin >> x >> y;
            if (D.at(x-1).count(y) || D.at(x-1).count(0)){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
