// URI 1300 - Hours and Minutes
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin>>n){
		if(n%6==0){
			cout<<"Y"<<endl;
		}
		else if(n==0){
			cout<<'Y'<<endl;
		}
		else{
			cout<<'N'<<endl;
		}
	}//end while
	return 0;
}//end main