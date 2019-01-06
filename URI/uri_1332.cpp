// URI 1332 - One-Two-Three
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s.length()==3){
			if(s=="one" || (s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e')){
				cout<<"1"<<endl;
			}
			else{
				cout<<"2"<<endl;
			}
		}//end if
		else{
			cout<<"3"<<endl;
		}
	}//end for
	return 0;
}//end main