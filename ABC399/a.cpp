#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main()
{
    int N;
    cin >> N;
    string S;
    string T;
    cin >> S >> T;
    int count = 0;
    for (int i = 0; i < N; i++){
        if (S.at(i) != T.at(i))
        {
            count++;
        }
        
    }
    
    cout << count;
}
