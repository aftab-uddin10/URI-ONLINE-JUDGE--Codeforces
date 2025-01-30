/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/


#include <iostream>
using namespace std;
int main() {
 int n;
    cin>>n;
    if(n==1)
        cout<<"I hate it";
    else if(n>1)
        cout<<"I hate that";
    for(int i=2; i<n; i++)
    {

        if(i%2==1 && i!=n)
            cout<<" I hate that";

        else if(i%2==0 && i!=n)
            cout<<" I love that";
    }
    if(n%2==0 && n>1)
        cout<<" I love it";
    else if(n>1)
        cout<<" I hate it";
    cout<<endl;
    return 0;
}
