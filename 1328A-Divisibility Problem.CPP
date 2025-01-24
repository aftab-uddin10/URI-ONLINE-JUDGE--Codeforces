/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/


#include <iostream>
using namespace std;
int main()
{
    int n;
    long long int a,b;
    cin>>n;
    while(n--)
    {
        int div=0,pls=0;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }

        div=a/b;
        pls=(div+1)*b;
        cout<<pls-a<<endl;

    }

}
