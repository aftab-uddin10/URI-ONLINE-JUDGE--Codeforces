/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A[1001];
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	       A[c++]=s[i]-'0';
	    }
	}
	sort(A,A+c);
	for(int i=0;i<c;i++){
	    cout<<A[i];
	    if(i==c-1){
	        break;
	    }
	    cout<<"+";
	}
	return 0;
}
