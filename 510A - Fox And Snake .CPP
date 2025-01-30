/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/


#include <iostream>
using namespace std;

int main() {

int n,m;
cin>>n>>m;
int A=0;
for(int i=0;i<n;i++){
	if(i%2==0){

	for(int j=0;j<m;j++){
		cout<<"#";}
	}
		else {
			++A;
			for(int j=0;j<m;j++){
					if(A%2==1&&j==m-1){
						cout<<"#";
					}
					else if(A%2==0&&j==0){
						cout<<"#";

					}
					else {
						cout<<".";
					}
			}
		}
	cout<<"\n";


	}

	return 0;
}
