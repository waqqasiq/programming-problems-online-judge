// URI 1555 - Functions
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i=0;
	scanf("%d",&i);
	int counter=0;
	while (counter<i){
		int x,y;
		scanf("%d %d",&x,&y);
		int r=3*x*3*x+y*y;
		int b=2*x*x+5*5*y*y;
		int c=-100*x+y*y*y;
		if(r>b && r>c){
				printf("Rafael ganhou\n");
		}
		else if (b>r && b>c){
			printf("Beto ganhou\n");
		}
		else{
			printf("Carlos ganhou\n");
		}
		counter++;
	}//end while
	return 0;
}//end main