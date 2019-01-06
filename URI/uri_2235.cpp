// URI 2235 - Walking in Time
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	char ch = 'S';
	char no = 'N';
	if(abs(a-b)==0 || abs(a-c)==0 || abs(b-c)==0){
		cout<<ch<<endl;
	}
	else if(a+b==c || a+c==b || b+c==a){
		cout<<ch<<endl;
	}
	else{
		cout<<no<<endl;
	}
	return 0;
} // end main