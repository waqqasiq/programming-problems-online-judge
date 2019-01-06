// URI 1467 - Zero or One
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	while(cin>>a){
		int b,c;
		cin>>b;
		cin>>c;
		if((a==0 && b==0 && c==0) || (a==1 && b==1 && c==1) ){
			cout<<"*"<<endl;
		}
		else if((a==1 && b==1) || (a==0 && b==0)){
			cout<<"C"<<endl;
		}
		else if((a==1 && c==1) || (a==0 && c==0)){
			cout<<"B"<<endl;
		}
		else if((c==1 && b==1) || (c==0 && b==0)){
			cout<<"A"<<endl;
		}
	}//end while
	return 0;
}//end main