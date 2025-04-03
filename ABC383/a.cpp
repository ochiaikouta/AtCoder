#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;

int main(){
    int N;
    cin >> N;
    int V[N];
    int T[N];
    int sum=0;
    for (int i = 0; i < N; i++)
    {
        cin >> T[i] >> V[i];
    }
    for (int i = 0; i < N-1; i++)
    {
        sum = sum + V[i];
        if ((sum - T[i+1] + T[i]>=0))
        {
            sum = sum - T[i+1] + T[i];
        }
        else
        {
            sum = 0;
        }
        
    
    }
    
    
    cout <<  sum << endl; 
}
