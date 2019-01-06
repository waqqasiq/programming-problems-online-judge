// URI 1091 - Division of Nlogonia
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	
	while(cin>>n){
		int c=0;
		if(n==0){
			break;
		}
		else{
			int x1,y1;
			cin>>x1;
			cin>>y1;
			while(c<n){
				int x2,y2;
				cin>>x2;
				cin>>y2;
				if(x2==x1 && y2==y1){
					cout<<"divisa"<<endl;
				}
				else if( x2==x1 || y2==y1){
					cout<<"divisa"<<endl;
				}
				else if(x2>x1 && y2>y1){
					cout<<"NE"<<endl;
				}
				else if(x2<x1 && y2>y1){
					cout<<"NO"<<endl;
				}
				
				else if(x2<x1 && y2<y1){
					cout<<"SO"<<endl;
				}
				
				else if(x2>x1 && y2<y1){
					cout<<"SE"<<endl;
				}
				c++;
			}//end inner while
		
	 	}//end outer else
	}//end outer while
	return 0;
}//end main