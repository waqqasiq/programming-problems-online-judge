#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	string s2;
	cin>>s2;

	int counter=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==s2[s2.size()-1-i]){
			counter++;
		}
		else{
			counter=-1;
			break;
		}
	}
	if(counter==s.size()){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}