// URI 1103 - Alarm Clock
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d;
	int x;
	while(cin>>a){
		
		cin>>b;
		cin>>c;
		cin>>d;
		if(a==0 && b==0 && c==0 && d==0){
			break;
		}
		else{
			if(a<c){
				x=(c-a)*60+(d-b);
			}
			else if(a>c){
				x=(24-(a-c))*60+(d-b);
			}
			else if(a==c){
				if(d<b){
					x=24*60+(d-b);
				}
				else{
					x=d-b;
				}
			}
			else if(c==0){
				x=(24-a)*60-(d-b);
			}
		}//end outer else
		cout<<x<<endl;
	}//end while
	return 0;
}//end main