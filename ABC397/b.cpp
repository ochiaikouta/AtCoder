#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main()
{
    string x;
    cin >> x;
    int l = x.length();
    char s[l];
    for (int i = 0; i < l; i++)
    {
        s[i] = x.at(i);
    }
    
    int count = 0;
    for (int i = 0; i < l; i++)
    {
       if(i !=0){
        if((s[i-1] == s[i])) ++count;
       }
    
    }
    if (s[l-1] == 'i') ++count; 
    if (s[0] == 'o') ++count;

    cout << count;
}