// URI 1087 - Queen
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x1,y1,x2,y2;
	while(cin>>x1){
		cin>>y1;
		cin>>x2;
		cin>>y2;
		if(x1==0 && y1==0 && x2==0 && y2==0){
			break;
		}
		else if(x1==x2 && y1==y2){
			cout<<0<<endl;
		}
		else if(x1==x2){
			cout<<1<<endl;
		}
		else if(y1==y2){
			cout<<1<<endl;
		}
		else if(  ((x1-x2)/(y1-y2*1.0))==1 || ((x1-x2)/(y1-y2*1.0))==-1){
			cout<<1<<endl;
		}
		else cout<<2<<endl;
	}//end while
	return 0;
}//end main