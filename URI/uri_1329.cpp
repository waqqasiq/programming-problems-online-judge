// URI 1329 - Head or Tail
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		int m=0,j=0;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			if(x==0){
				m++;
				
			}
			else if(x==1){
				j++;
			}
		}//end for
		cout<<"Mary won "<<m<<" times ";
		cout<<"and John won "<<j<<" times"<<endl;
	}//end while
	return 0;
}//end main