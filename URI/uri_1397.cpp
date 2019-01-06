// URI 1397 - Game of The Greatest
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		int og=0,child=0;
		for(int i=0; i<n; i++){
			int a,b;
			cin>>a;
			cin>>b;
			if(a==b){
				
			}
			else if(a>b){
				og++;
			}
			else if(a<b){
				child++;
			}
		}//end for
		cout<<og<<" "<<child<<endl;
	}//end while
	return 0;
}//end main