#include <iostream>
using namespace std;
int main() {
int n,i,x,y,z;
int s=0 ;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x >> y >> z ;
        if((x+y+z) >= 2) s++ ;
    }
    cout << s <<"\n";
    return 0;
}
