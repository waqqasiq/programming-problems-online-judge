// URI 1161 - Factorial Sum
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin>>n){
		int n2;
		cin>>n2;
		
		long long int fact=n;
		long long int fact2=n2;
		
		if(n==0 || n==1){
			fact=1;
		}
		else{
			for(int i=n-1;i>=2;i--){
				fact=fact*i;
			}
		}//end else
		if(n2==0 || n2==1){
			fact2=1;
		}
		else{
			for(int i=n2-1;i>=2;i--){
				fact2=fact2*i;
			}
		}//end else
			cout<<fact+fact2<<endl;
	}//end while
	return 0;
}//end main