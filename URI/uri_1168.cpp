// URI 1168 - LED
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		int sum=0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='0' || s[i]=='9' || s[i]=='6'){
				sum=sum+6;
			}
			else if(s[i]=='1'){
				sum+=2;
			}
			else if(s[i]=='2' || s[i]=='3' || s[i]=='5'){
				sum+=5;
			}
			else if(s[i]=='4'){
				sum+=4;
			}
			else if(s[i]=='7'){
				sum+=3;
			}
			else if(s[i]=='8'){
				sum+=7;
			}
		}//end inner for
		cout<<sum<< " leds"<<endl;
	}// end outer for
	return 0;
}//end main