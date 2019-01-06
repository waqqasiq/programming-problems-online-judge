// URI 1129 - Optical Reader
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin>>n){
		int x=0;
		if(n==0){
			break;
		}
		while(x<n){
			int counter=0;
			int counter2=0;
			int a,b,c,d,e;
			cin>>a;
			cin>>b;
			cin>>c;
			cin>>d;
			cin>>e;
			if(a<127){
				counter++;
			}
			else{
				counter2++;
			}
			if(b<127){
				counter++;
			}
			
			else{
				counter2++;
			}
			if(c<127){
				counter++;
			}
			
			else{
				counter2++;
			}
			if(d<127){
				counter++;
			}
			
			else{
				counter2++;
			}
			if(e<127){
				counter++;
			}
			
			else{
				counter2++;
			}
			if(counter>1){
				cout<<"*"<<endl;
			}
			else if(counter2>=4){
				if(a<=127){
					cout<<"A"<<endl;
				}
				else if(b<=127){
					cout<<"B"<<endl;
				}
				else if(c<=127){
					cout<<"C"<<endl;
				}
				else if(d<=127){
					cout<<"D"<<endl;
				}
				else if(e<=127){
					cout<<"E"<<endl;
				}
				else{
					cout<<"*"<<endl;
				}
			}//outer else if
			x++;
		}//end inner while
	}//end outer while
	return 0;
}//end main