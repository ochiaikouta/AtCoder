#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    int c = N/2;
    int max = 0;
    bool judge = true;
    vector<int> T;
    vector<int> U;
    int S;
    while(judge)
    {
        for (int i = c; i < N; i++)
        {
            if(i == c) T.push_back(A.at(c));
            for (int j = 0; j < T.size(); j++)
            {
                if(A.at(i) != T.at(j)) T.push_back(A.at(i));
            }
        }
        for (int i = c-1 ; i >=0; i--)
        {
            if(i == c-1) U.push_back(A.at(c-1));
            for (int j = 0; j < U.size(); j++)
            {
                if(A.at(i) != U.at(j)) U.push_back(U.at(i));
            }
        }
        S = T.size() + U.size();
        if(S < max) break;
        else max = S;
    }
    cout << S;

    
}