/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/


#include <iostream>
#include <string>
using namespace std;
int main() {
   string A,B;
   int x,i,j,y,c;
   cin>> A >> B;
   x= A.size();
   y= B.size();
   c=0;
   for(i=0,j=y-1;i<x,j>=0;i++,j--){
           if(B[j] == A[i]) c++;
   }
   if(x==y){
       if(x==c) cout<<"YES\n";
       else cout<<"NO\n";
   }
   else cout<<"NO\n";

    return 0;
}
