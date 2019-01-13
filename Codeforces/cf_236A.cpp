#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	getline(cin,s);
	
	int flag=0;
	int a;
	
	for(int i=0;i<s.length();i++){
		int counter=0;
		for(int x=i+1;x<s.length();x++){
		
			if(s[i]==s[x]){
				counter++;
				
			}
		}
		
		if(counter==0){
			flag++;
		}
		
		
	}
	
	if(flag%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
	
	
	return 0;
}