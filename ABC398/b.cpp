#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main()
{
    int A[7];
    set<int> B;
    for (int i=0; i<7; i++){
        cin >> A[i];
        B.insert(A[i]);
    }
    if (B.size() > 4 || B.size() < 2){
        cout << "No";
    }
    

    
    
    
      
}