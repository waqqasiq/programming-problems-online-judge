// URI 2232 - Pascal's Triangle
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		int x;
		cin>>x;
		int y=pow(2,x)-1;
		cout<<y<<endl;
	}//end for
	return 0;
}//end main