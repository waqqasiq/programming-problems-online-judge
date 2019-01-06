// URI 1192 - Paula's Mathematic Game
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	char a[n];
	int x,z;
	char y;
	for(int i=0;i<n;i++){
		cin>>x;
		cin>>y;
		cin>>z;
		if(x==z){
			cout<<x*z<<endl;
		}
		else if(y>=97 && y<=122){
			cout<<x+z<<endl;
		}
		else if(y>=65 && y<=90){
			cout<<z-x<<endl;
		}
	}//end for
	return 0;
}//end main