// URI 1198 - Hashmat the Brave Warrior
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unsigned long long  a;
	unsigned long long  b;
	while(scanf("%lld %lld", &a, &b)==2){
	
		if(a>b){
			cout<<a-b<<endl;
		}
		else{
			cout<<b-a<<endl;
		}
	}//end while
	
	return 0;
} //end main