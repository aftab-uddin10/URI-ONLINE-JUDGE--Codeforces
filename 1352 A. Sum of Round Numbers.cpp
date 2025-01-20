//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int A[100000];
    cin>>t;
    while(t--)
    {
        int d=0,r=0;
        cin>>n;
        if(n >= 1000){
            r=n%1000;
            A[d++]=n-r;
            n%=1000;
        }
        if(n >= 100){
            r=n%100;
            A[d++]=n-r;
            n%=100;
        }
        if(n >= 10){
            r=n%10;
            A[d++]=n-r;
            n%=10;
        }
        if(n<10 && n>0){
            A[d++]=n;
        }
        vector<int>va;
        for(int i=0; i<d; i++){
            va.push_back(A[i]);
        }
        cout<<va.size()<<endl;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
}