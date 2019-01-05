#include <bits/stdc++.h>
using namespace std;
//Codeforces 96A Football
int main() {
	// your code goes here
	string s;
	cin>>s;
	char arr[s.size()];
	for(int i=0;i<s.size();i++){
		arr[i]=s[i];
	}
	//for(int i=0;i<s.size();i++){
	//	cout<<arr[i]<<" ";
	//}
	//cout<<""<<endl;
	int counter0=0;
	for(int i=0;i<s.size();i++){
		if(arr[i]=='0'){
			counter0++;
			if(counter0>=7){
				break;
			}
		}
		
		else{
			counter0=0;
		}
	}
	int counter1=0;
	for(int i=0;i<s.size();i++){
		if(arr[i]=='1'){
			counter1++;
			if(counter1>=7){
				break;
			}
		}
		
		else{
			counter1=0;
		}
	}
	if(counter1>=7 || counter0>=7){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	//cout<<counter0<<endl;
	//cout<<counter1<<endl;
	return 0;
}