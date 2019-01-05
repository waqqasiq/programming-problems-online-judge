//UVA - Beat the spread

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for( int i=0; i<n; i++){
		int a,b;
		cin>>a;
		cin>>b;
		if(a<b || (a+b)%2!=0){
			printf("impossible\n");
		}
		else{
			int x=(a+b)/2;
			int y=a-x;
				printf("%d ",x);
				printf("%d\n",y);
		}
	}
	return 0;
}