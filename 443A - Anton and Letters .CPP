/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set <char> a;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a.insert(s[i]);
    }
    cout<<a.size()<<endl;
    return 0;
}
