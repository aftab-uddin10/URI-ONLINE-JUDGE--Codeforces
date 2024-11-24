#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    set<char>S;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
            S.insert(s[i]);
    }
    if(S.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
