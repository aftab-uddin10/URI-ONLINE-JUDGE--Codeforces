#include <iostream>

using namespace std;
int main() {
   int i,j,x,ans=0;
   for(i=1;i<=5;i++){
       for(j=1;j<=5;j++){
           cin >> x;
           if(x==1) ans= abs(3-j)+abs(3-i);
       }
   }
  cout << ans <<"\n" ;
    return 0;
}
